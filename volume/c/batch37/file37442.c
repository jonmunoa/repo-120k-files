// fichero 37442 -- macros y constantes -- MODIFICADO
#define LIMITE_37442 37642
#define FACTOR_37442 4

int aplicar_limite37442(int valor) {
    if (valor > LIMITE_37442) return LIMITE_37442;
    return valor * FACTOR_37442;
}
