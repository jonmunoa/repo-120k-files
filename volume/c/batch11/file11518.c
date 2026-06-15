// fichero 11518 -- macros y constantes -- MODIFICADO
#define LIMITE_11518 11718
#define FACTOR_11518 5

int aplicar_limite11518(int valor) {
    if (valor > LIMITE_11518) return LIMITE_11518;
    return valor * FACTOR_11518;
}
