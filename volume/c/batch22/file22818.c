// fichero 22818 -- macros y constantes
#define LIMITE_22818 22918
#define FACTOR_22818 4

int aplicar_limite22818(int valor) {
    if (valor > LIMITE_22818) return LIMITE_22818;
    return valor * FACTOR_22818;
}
