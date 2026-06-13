// fichero 4054 -- macros y constantes
#define LIMITE_4054 4154
#define FACTOR_4054 5

int aplicar_limite4054(int valor) {
    if (valor > LIMITE_4054) return LIMITE_4054;
    return valor * FACTOR_4054;
}
