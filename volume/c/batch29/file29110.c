// fichero 29110 -- macros y constantes -- MODIFICADO
#define LIMITE_29110 29310
#define FACTOR_29110 2

int aplicar_limite29110(int valor) {
    if (valor > LIMITE_29110) return LIMITE_29110;
    return valor * FACTOR_29110;
}
