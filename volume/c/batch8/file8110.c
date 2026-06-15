// fichero 8110 -- macros y constantes -- MODIFICADO
#define LIMITE_8110 8310
#define FACTOR_8110 2

int aplicar_limite8110(int valor) {
    if (valor > LIMITE_8110) return LIMITE_8110;
    return valor * FACTOR_8110;
}
