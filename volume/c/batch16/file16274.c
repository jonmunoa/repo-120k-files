// fichero 16274 -- macros y constantes
#define LIMITE_16274 16374
#define FACTOR_16274 5

int aplicar_limite16274(int valor) {
    if (valor > LIMITE_16274) return LIMITE_16274;
    return valor * FACTOR_16274;
}
