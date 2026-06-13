// fichero 46366 -- macros y constantes
#define LIMITE_46366 46466
#define FACTOR_46366 2

int aplicar_limite46366(int valor) {
    if (valor > LIMITE_46366) return LIMITE_46366;
    return valor * FACTOR_46366;
}
