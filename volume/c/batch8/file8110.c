// fichero 8110 -- macros y constantes
#define LIMITE_8110 8210
#define FACTOR_8110 1

int aplicar_limite8110(int valor) {
    if (valor > LIMITE_8110) return LIMITE_8110;
    return valor * FACTOR_8110;
}
