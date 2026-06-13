// fichero 51642 -- macros y constantes
#define LIMITE_51642 51742
#define FACTOR_51642 3

int aplicar_limite51642(int valor) {
    if (valor > LIMITE_51642) return LIMITE_51642;
    return valor * FACTOR_51642;
}
