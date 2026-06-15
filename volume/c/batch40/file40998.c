// fichero 40998 -- macros y constantes -- MODIFICADO
#define LIMITE_40998 41198
#define FACTOR_40998 5

int aplicar_limite40998(int valor) {
    if (valor > LIMITE_40998) return LIMITE_40998;
    return valor * FACTOR_40998;
}
