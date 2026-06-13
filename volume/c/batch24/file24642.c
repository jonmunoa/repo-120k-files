// fichero 24642 -- macros y constantes
#define LIMITE_24642 24742
#define FACTOR_24642 3

int aplicar_limite24642(int valor) {
    if (valor > LIMITE_24642) return LIMITE_24642;
    return valor * FACTOR_24642;
}
