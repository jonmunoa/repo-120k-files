// fichero 19106 -- macros y constantes
#define LIMITE_19106 19206
#define FACTOR_19106 2

int aplicar_limite19106(int valor) {
    if (valor > LIMITE_19106) return LIMITE_19106;
    return valor * FACTOR_19106;
}
