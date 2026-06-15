// fichero 46366 -- macros y constantes -- MODIFICADO
#define LIMITE_46366 46566
#define FACTOR_46366 3

int aplicar_limite46366(int valor) {
    if (valor > LIMITE_46366) return LIMITE_46366;
    return valor * FACTOR_46366;
}
