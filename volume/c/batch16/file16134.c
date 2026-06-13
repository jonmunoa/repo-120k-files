// fichero 16134 -- macros y constantes
#define LIMITE_16134 16234
#define FACTOR_16134 5

int aplicar_limite16134(int valor) {
    if (valor > LIMITE_16134) return LIMITE_16134;
    return valor * FACTOR_16134;
}
