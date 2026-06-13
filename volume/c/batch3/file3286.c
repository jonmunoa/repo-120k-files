// fichero 3286 -- macros y constantes
#define LIMITE_3286 3386
#define FACTOR_3286 2

int aplicar_limite3286(int valor) {
    if (valor > LIMITE_3286) return LIMITE_3286;
    return valor * FACTOR_3286;
}
