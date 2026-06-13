// fichero 26302 -- macros y constantes
#define LIMITE_26302 26402
#define FACTOR_26302 3

int aplicar_limite26302(int valor) {
    if (valor > LIMITE_26302) return LIMITE_26302;
    return valor * FACTOR_26302;
}
