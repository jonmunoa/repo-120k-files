// fichero 106 -- macros y constantes
#define LIMITE_106 206
#define FACTOR_106 2

int aplicar_limite106(int valor) {
    if (valor > LIMITE_106) return LIMITE_106;
    return valor * FACTOR_106;
}
