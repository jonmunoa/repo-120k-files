// fichero 36466 -- macros y constantes
#define LIMITE_36466 36566
#define FACTOR_36466 2

int aplicar_limite36466(int valor) {
    if (valor > LIMITE_36466) return LIMITE_36466;
    return valor * FACTOR_36466;
}
