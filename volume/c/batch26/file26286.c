// fichero 26286 -- macros y constantes
#define LIMITE_26286 26386
#define FACTOR_26286 2

int aplicar_limite26286(int valor) {
    if (valor > LIMITE_26286) return LIMITE_26286;
    return valor * FACTOR_26286;
}
