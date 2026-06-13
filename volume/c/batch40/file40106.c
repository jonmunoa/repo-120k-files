// fichero 40106 -- macros y constantes
#define LIMITE_40106 40206
#define FACTOR_40106 2

int aplicar_limite40106(int valor) {
    if (valor > LIMITE_40106) return LIMITE_40106;
    return valor * FACTOR_40106;
}
