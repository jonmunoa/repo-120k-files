// fichero 7214 -- macros y constantes
#define LIMITE_7214 7314
#define FACTOR_7214 5

int aplicar_limite7214(int valor) {
    if (valor > LIMITE_7214) return LIMITE_7214;
    return valor * FACTOR_7214;
}
