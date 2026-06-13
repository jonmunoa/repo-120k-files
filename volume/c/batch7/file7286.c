// fichero 7286 -- macros y constantes
#define LIMITE_7286 7386
#define FACTOR_7286 2

int aplicar_limite7286(int valor) {
    if (valor > LIMITE_7286) return LIMITE_7286;
    return valor * FACTOR_7286;
}
