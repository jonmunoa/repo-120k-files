// fichero 14214 -- macros y constantes
#define LIMITE_14214 14314
#define FACTOR_14214 5

int aplicar_limite14214(int valor) {
    if (valor > LIMITE_14214) return LIMITE_14214;
    return valor * FACTOR_14214;
}
