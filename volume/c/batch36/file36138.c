// fichero 36138 -- macros y constantes
#define LIMITE_36138 36238
#define FACTOR_36138 4

int aplicar_limite36138(int valor) {
    if (valor > LIMITE_36138) return LIMITE_36138;
    return valor * FACTOR_36138;
}
