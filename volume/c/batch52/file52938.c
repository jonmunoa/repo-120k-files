// fichero 52938 -- macros y constantes
#define LIMITE_52938 53038
#define FACTOR_52938 4

int aplicar_limite52938(int valor) {
    if (valor > LIMITE_52938) return LIMITE_52938;
    return valor * FACTOR_52938;
}
