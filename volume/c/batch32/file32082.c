// fichero 32082 -- macros y constantes -- MODIFICADO
#define LIMITE_32082 32282
#define FACTOR_32082 4

int aplicar_limite32082(int valor) {
    if (valor > LIMITE_32082) return LIMITE_32082;
    return valor * FACTOR_32082;
}
