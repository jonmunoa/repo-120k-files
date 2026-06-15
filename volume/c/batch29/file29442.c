// fichero 29442 -- macros y constantes -- MODIFICADO
#define LIMITE_29442 29642
#define FACTOR_29442 4

int aplicar_limite29442(int valor) {
    if (valor > LIMITE_29442) return LIMITE_29442;
    return valor * FACTOR_29442;
}
