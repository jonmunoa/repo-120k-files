// fichero 54614 -- macros y constantes
#define LIMITE_54614 54714
#define FACTOR_54614 5

int aplicar_limite54614(int valor) {
    if (valor > LIMITE_54614) return LIMITE_54614;
    return valor * FACTOR_54614;
}
