def output(ca,m,n):
    # printing the required grid on terminal obtained by applying rule to initial state for given number of iterations
   for i in range(m):
        for j in range(n):
            print(ca[i][j], end="")
        print()

    # printing the required grid in output.txt file obtained by applying rule to initial state for given number of iterations
   with open("./q2/output.txt", "w") as output_file:
        for i in range(m):
            for j in range(n):
                print(ca[i][j], end="", file=output_file)
            print(end='\n', file=output_file)
   output_file.close()
