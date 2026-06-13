// fichero 37106 -- macros y constantes
#define LIMITE_37106 37206
#define FACTOR_37106 2

int aplicar_limite37106(int valor) {
    if (valor > LIMITE_37106) return LIMITE_37106;
    return valor * FACTOR_37106;
}
