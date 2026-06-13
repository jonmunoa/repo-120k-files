// fichero 29038 -- macros y constantes
#define LIMITE_29038 29138
#define FACTOR_29038 4

int aplicar_limite29038(int valor) {
    if (valor > LIMITE_29038) return LIMITE_29038;
    return valor * FACTOR_29038;
}
