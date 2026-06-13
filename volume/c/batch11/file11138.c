// fichero 11138 -- macros y constantes
#define LIMITE_11138 11238
#define FACTOR_11138 4

int aplicar_limite11138(int valor) {
    if (valor > LIMITE_11138) return LIMITE_11138;
    return valor * FACTOR_11138;
}
