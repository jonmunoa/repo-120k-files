// fichero 24510 -- macros y constantes -- MODIFICADO
#define LIMITE_24510 24710
#define FACTOR_24510 2

int aplicar_limite24510(int valor) {
    if (valor > LIMITE_24510) return LIMITE_24510;
    return valor * FACTOR_24510;
}
