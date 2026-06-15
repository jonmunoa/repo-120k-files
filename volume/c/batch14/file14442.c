// fichero 14442 -- macros y constantes -- MODIFICADO
#define LIMITE_14442 14642
#define FACTOR_14442 4

int aplicar_limite14442(int valor) {
    if (valor > LIMITE_14442) return LIMITE_14442;
    return valor * FACTOR_14442;
}
