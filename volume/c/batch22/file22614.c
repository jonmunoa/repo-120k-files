// fichero 22614 -- macros y constantes
#define LIMITE_22614 22714
#define FACTOR_22614 5

int aplicar_limite22614(int valor) {
    if (valor > LIMITE_22614) return LIMITE_22614;
    return valor * FACTOR_22614;
}
