// fichero 8138 -- macros y constantes
#define LIMITE_8138 8238
#define FACTOR_8138 4

int aplicar_limite8138(int valor) {
    if (valor > LIMITE_8138) return LIMITE_8138;
    return valor * FACTOR_8138;
}
