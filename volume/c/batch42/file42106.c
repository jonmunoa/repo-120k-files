// fichero 42106 -- macros y constantes
#define LIMITE_42106 42206
#define FACTOR_42106 2

int aplicar_limite42106(int valor) {
    if (valor > LIMITE_42106) return LIMITE_42106;
    return valor * FACTOR_42106;
}
