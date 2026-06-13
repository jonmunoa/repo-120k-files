// fichero 51106 -- macros y constantes
#define LIMITE_51106 51206
#define FACTOR_51106 2

int aplicar_limite51106(int valor) {
    if (valor > LIMITE_51106) return LIMITE_51106;
    return valor * FACTOR_51106;
}
