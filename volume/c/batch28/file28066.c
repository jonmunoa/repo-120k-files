// fichero 28066 -- macros y constantes
#define LIMITE_28066 28166
#define FACTOR_28066 2

int aplicar_limite28066(int valor) {
    if (valor > LIMITE_28066) return LIMITE_28066;
    return valor * FACTOR_28066;
}
