// fichero 45294 -- macros y constantes
#define LIMITE_45294 45394
#define FACTOR_45294 5

int aplicar_limite45294(int valor) {
    if (valor > LIMITE_45294) return LIMITE_45294;
    return valor * FACTOR_45294;
}
