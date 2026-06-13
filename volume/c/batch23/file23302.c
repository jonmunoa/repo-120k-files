// fichero 23302 -- macros y constantes
#define LIMITE_23302 23402
#define FACTOR_23302 3

int aplicar_limite23302(int valor) {
    if (valor > LIMITE_23302) return LIMITE_23302;
    return valor * FACTOR_23302;
}
