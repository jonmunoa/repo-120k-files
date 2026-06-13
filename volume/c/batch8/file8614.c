// fichero 8614 -- macros y constantes
#define LIMITE_8614 8714
#define FACTOR_8614 5

int aplicar_limite8614(int valor) {
    if (valor > LIMITE_8614) return LIMITE_8614;
    return valor * FACTOR_8614;
}
