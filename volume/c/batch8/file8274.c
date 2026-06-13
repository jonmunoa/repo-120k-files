// fichero 8274 -- macros y constantes
#define LIMITE_8274 8374
#define FACTOR_8274 5

int aplicar_limite8274(int valor) {
    if (valor > LIMITE_8274) return LIMITE_8274;
    return valor * FACTOR_8274;
}
