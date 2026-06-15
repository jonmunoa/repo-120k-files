// fichero 26442 -- macros y constantes -- MODIFICADO
#define LIMITE_26442 26642
#define FACTOR_26442 4

int aplicar_limite26442(int valor) {
    if (valor > LIMITE_26442) return LIMITE_26442;
    return valor * FACTOR_26442;
}
