// fichero 50274 -- macros y constantes
#define LIMITE_50274 50374
#define FACTOR_50274 5

int aplicar_limite50274(int valor) {
    if (valor > LIMITE_50274) return LIMITE_50274;
    return valor * FACTOR_50274;
}
