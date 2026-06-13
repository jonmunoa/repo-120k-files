// fichero 50490 -- macros y constantes
#define LIMITE_50490 50590
#define FACTOR_50490 1

int aplicar_limite50490(int valor) {
    if (valor > LIMITE_50490) return LIMITE_50490;
    return valor * FACTOR_50490;
}
