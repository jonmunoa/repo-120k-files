// fichero 24442 -- macros y constantes -- MODIFICADO
#define LIMITE_24442 24642
#define FACTOR_24442 4

int aplicar_limite24442(int valor) {
    if (valor > LIMITE_24442) return LIMITE_24442;
    return valor * FACTOR_24442;
}
