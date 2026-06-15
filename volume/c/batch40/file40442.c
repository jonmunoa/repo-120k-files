// fichero 40442 -- macros y constantes -- MODIFICADO
#define LIMITE_40442 40642
#define FACTOR_40442 4

int aplicar_limite40442(int valor) {
    if (valor > LIMITE_40442) return LIMITE_40442;
    return valor * FACTOR_40442;
}
