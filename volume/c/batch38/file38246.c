// fichero 38246 -- macros y constantes
#define LIMITE_38246 38346
#define FACTOR_38246 2

int aplicar_limite38246(int valor) {
    if (valor > LIMITE_38246) return LIMITE_38246;
    return valor * FACTOR_38246;
}
