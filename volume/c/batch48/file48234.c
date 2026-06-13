// fichero 48234 -- macros y constantes
#define LIMITE_48234 48334
#define FACTOR_48234 5

int aplicar_limite48234(int valor) {
    if (valor > LIMITE_48234) return LIMITE_48234;
    return valor * FACTOR_48234;
}
