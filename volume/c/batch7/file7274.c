// fichero 7274 -- macros y constantes
#define LIMITE_7274 7374
#define FACTOR_7274 5

int aplicar_limite7274(int valor) {
    if (valor > LIMITE_7274) return LIMITE_7274;
    return valor * FACTOR_7274;
}
