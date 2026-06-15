// fichero 442 -- macros y constantes -- MODIFICADO
#define LIMITE_442 642
#define FACTOR_442 4

int aplicar_limite442(int valor) {
    if (valor > LIMITE_442) return LIMITE_442;
    return valor * FACTOR_442;
}
