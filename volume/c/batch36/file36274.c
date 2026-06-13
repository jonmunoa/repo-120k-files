// fichero 36274 -- macros y constantes
#define LIMITE_36274 36374
#define FACTOR_36274 5

int aplicar_limite36274(int valor) {
    if (valor > LIMITE_36274) return LIMITE_36274;
    return valor * FACTOR_36274;
}
