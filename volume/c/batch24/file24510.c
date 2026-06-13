// fichero 24510 -- macros y constantes
#define LIMITE_24510 24610
#define FACTOR_24510 1

int aplicar_limite24510(int valor) {
    if (valor > LIMITE_24510) return LIMITE_24510;
    return valor * FACTOR_24510;
}
