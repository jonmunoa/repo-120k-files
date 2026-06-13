// fichero 15274 -- macros y constantes
#define LIMITE_15274 15374
#define FACTOR_15274 5

int aplicar_limite15274(int valor) {
    if (valor > LIMITE_15274) return LIMITE_15274;
    return valor * FACTOR_15274;
}
