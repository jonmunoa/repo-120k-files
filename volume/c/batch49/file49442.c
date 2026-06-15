// fichero 49442 -- macros y constantes -- MODIFICADO
#define LIMITE_49442 49642
#define FACTOR_49442 4

int aplicar_limite49442(int valor) {
    if (valor > LIMITE_49442) return LIMITE_49442;
    return valor * FACTOR_49442;
}
