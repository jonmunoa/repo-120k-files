// fichero 30442 -- macros y constantes -- MODIFICADO
#define LIMITE_30442 30642
#define FACTOR_30442 4

int aplicar_limite30442(int valor) {
    if (valor > LIMITE_30442) return LIMITE_30442;
    return valor * FACTOR_30442;
}
