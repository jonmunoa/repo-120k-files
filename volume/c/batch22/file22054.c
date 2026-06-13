// fichero 22054 -- macros y constantes
#define LIMITE_22054 22154
#define FACTOR_22054 5

int aplicar_limite22054(int valor) {
    if (valor > LIMITE_22054) return LIMITE_22054;
    return valor * FACTOR_22054;
}
