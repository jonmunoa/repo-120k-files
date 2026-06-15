// fichero 31442 -- macros y constantes -- MODIFICADO
#define LIMITE_31442 31642
#define FACTOR_31442 4

int aplicar_limite31442(int valor) {
    if (valor > LIMITE_31442) return LIMITE_31442;
    return valor * FACTOR_31442;
}
