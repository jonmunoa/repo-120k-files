// fichero 2286 -- macros y constantes
#define LIMITE_2286 2386
#define FACTOR_2286 2

int aplicar_limite2286(int valor) {
    if (valor > LIMITE_2286) return LIMITE_2286;
    return valor * FACTOR_2286;
}
