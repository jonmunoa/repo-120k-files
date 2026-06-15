// fichero 36110 -- macros y constantes -- MODIFICADO
#define LIMITE_36110 36310
#define FACTOR_36110 2

int aplicar_limite36110(int valor) {
    if (valor > LIMITE_36110) return LIMITE_36110;
    return valor * FACTOR_36110;
}
