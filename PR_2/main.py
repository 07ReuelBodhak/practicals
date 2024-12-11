def SUB_MATRIX(matA,matB):
    matC = []
    for i in range(len(matA)):
        result = []
        for j in range(len(matA[i])):
            result.append(matA[i][j] - matB[i][j])
        matC.append(result)
    return matC

def MUL_MATRIX(matA,matB):
    matC = []
    for i in range(len(matA)):
        result = []
        for j in range(len(matB[0])):
            sum = 0
            for k in range(len(matA[0])):
                sum += matA[i][k] * matB[k][j]
            result.append(sum)
        matC.append(result)
    return matC

matA = [[1,2,3],[4,5,6],[5,1,2]]
matB = [[6,4,1],[6,7,19],[7,2,5]]

matE = [[1,2],[3,4]]
matF = [[2,0],[1,3]]

matC = SUB_MATRIX(matA,matB)
print("Subtraction : \n",matC)

matD = MUL_MATRIX(matE,matF)
print("Multiplication : \n",matD)