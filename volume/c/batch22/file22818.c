// fichero 22818 -- macros y constantes -- MODIFICADO
#define LIMITE_22818 23018
#define FACTOR_22818 5

int aplicar_limite22818(int valor) {
    if (valor > LIMITE_22818) return LIMITE_22818;
    return valor * FACTOR_22818;
}
