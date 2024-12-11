def Add_matrix(matA,matB):
    matC = []
    
    for i in range(len(matA)):
        result = []
        for j in range(len(matA[i])):
            result.append(matA[i][j] + matB[i][j])
        matC.append(result)
    return matC

def TransposeMatrix(mat):
    transpose = []
    for i in range(len(mat[0])):
        row = []
        for j in range(len(mat)):
            row.append(mat[j][i])
        transpose.append(row)
    return transpose

matA =[[1,2,3],[2,4,6],[2,3,5]]
matB =[[5,6,8],[3,5,7],[5,6,7]]

matC = Add_matrix(matA,matB)
print(matC)
matC = TransposeMatrix(matC)
print(matC)