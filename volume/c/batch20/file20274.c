// fichero 20274 -- macros y constantes
#define LIMITE_20274 20374
#define FACTOR_20274 5

int aplicar_limite20274(int valor) {
    if (valor > LIMITE_20274) return LIMITE_20274;
    return valor * FACTOR_20274;
}
