import sys
from output import *
from prompt import *


def CA(no_iterns, m, n, ca):  # defining CA function which takes number of iterations as parameter
    # obtaining data from config.txt and making grid initial state of ca

    itn_count = 0  # initiating iteration count as 0

    # while loop which runs until iteration count is less than number of iterations(input)
    while(itn_count < no_iterns):
        itn_count = itn_count+1  # incrementing iteration count for each iteration

        modified_ca = []  # declaring modified_ca list which updates ca according to rule

        # Rule:A cell becomes alive if its left neighbour is alive(synchronous updation)

        # modifying ca according to rule
        for i in range(m):
            modified_ca_temp = []
            for j in range(n):
                if(j-1 > -1):
                    if(ca[i][j-1] == 'X'):
                        modified_ca_temp.append('X')
                    else:
                        modified_ca_temp.append(ca[i][j])

                else:
                    modified_ca_temp.append(ca[i][j])
            modified_ca.append(modified_ca_temp)
        ca = modified_ca  # updating ca to modified_ca by the end of iteration
    print("Number of iterations from initial state:", end="")
    print(no_iterns)
    output(ca, m, n)


# main function for taking number of iterations as input anf finding corresponding
# cellular automaton until input is given as -1
if __name__ == '__main__':
    x = 0
    init_state = []
    with open("./q1/config.txt") as input_file:
        for line in input_file:
            line_input = line.split()
            init_state.append(line_input)
    n = int(init_state[0][0])
    m = int(init_state[0][1])
    k = int(init_state[0][2])
    ca = []
    for i in range(m):
        casub = []
        for j in range(n):
            casub.append('O')
        ca.append(casub)
    for i in range(k):
        d = int(init_state[i+1][0])
        e = int(init_state[i+1][1])
        ca[e-1][d-1] = 'X'
    while True:
        prompt()
        no_itns = int(sys.stdin.readline())
        no_itns = int(no_itns)
        x = x+no_itns

        if(no_itns != -1):
            CA(x,  m, n,ca)
        else:
            break
