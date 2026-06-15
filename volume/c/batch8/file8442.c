// fichero 8442 -- macros y constantes -- MODIFICADO
#define LIMITE_8442 8642
#define FACTOR_8442 4

int aplicar_limite8442(int valor) {
    if (valor > LIMITE_8442) return LIMITE_8442;
    return valor * FACTOR_8442;
}
