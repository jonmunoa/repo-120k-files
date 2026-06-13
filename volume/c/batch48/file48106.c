// fichero 48106 -- macros y constantes
#define LIMITE_48106 48206
#define FACTOR_48106 2

int aplicar_limite48106(int valor) {
    if (valor > LIMITE_48106) return LIMITE_48106;
    return valor * FACTOR_48106;
}
