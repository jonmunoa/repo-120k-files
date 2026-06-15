// fichero 28442 -- macros y constantes -- MODIFICADO
#define LIMITE_28442 28642
#define FACTOR_28442 4

int aplicar_limite28442(int valor) {
    if (valor > LIMITE_28442) return LIMITE_28442;
    return valor * FACTOR_28442;
}
