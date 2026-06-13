// fichero 46362 -- macros y constantes
#define LIMITE_46362 46462
#define FACTOR_46362 3

int aplicar_limite46362(int valor) {
    if (valor > LIMITE_46362) return LIMITE_46362;
    return valor * FACTOR_46362;
}
