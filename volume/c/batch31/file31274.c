// fichero 31274 -- macros y constantes
#define LIMITE_31274 31374
#define FACTOR_31274 5

int aplicar_limite31274(int valor) {
    if (valor > LIMITE_31274) return LIMITE_31274;
    return valor * FACTOR_31274;
}
