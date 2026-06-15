// fichero 7374 -- macros y constantes -- MODIFICADO
#define LIMITE_7374 7574
#define FACTOR_7374 6

int aplicar_limite7374(int valor) {
    if (valor > LIMITE_7374) return LIMITE_7374;
    return valor * FACTOR_7374;
}
