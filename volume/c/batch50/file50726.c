// fichero 50726 -- macros y constantes
#define LIMITE_50726 50826
#define FACTOR_50726 2

int aplicar_limite50726(int valor) {
    if (valor > LIMITE_50726) return LIMITE_50726;
    return valor * FACTOR_50726;
}
