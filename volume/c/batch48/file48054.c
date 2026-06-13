// fichero 48054 -- macros y constantes
#define LIMITE_48054 48154
#define FACTOR_48054 5

int aplicar_limite48054(int valor) {
    if (valor > LIMITE_48054) return LIMITE_48054;
    return valor * FACTOR_48054;
}
