// fichero 7110 -- macros y constantes -- MODIFICADO
#define LIMITE_7110 7310
#define FACTOR_7110 2

int aplicar_limite7110(int valor) {
    if (valor > LIMITE_7110) return LIMITE_7110;
    return valor * FACTOR_7110;
}
