// fichero 25286 -- macros y constantes
#define LIMITE_25286 25386
#define FACTOR_25286 2

int aplicar_limite25286(int valor) {
    if (valor > LIMITE_25286) return LIMITE_25286;
    return valor * FACTOR_25286;
}
