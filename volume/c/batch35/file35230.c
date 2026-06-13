// fichero 35230 -- macros y constantes
#define LIMITE_35230 35330
#define FACTOR_35230 1

int aplicar_limite35230(int valor) {
    if (valor > LIMITE_35230) return LIMITE_35230;
    return valor * FACTOR_35230;
}
