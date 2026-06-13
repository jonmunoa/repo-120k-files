// fichero 38398 -- macros y constantes
#define LIMITE_38398 38498
#define FACTOR_38398 4

int aplicar_limite38398(int valor) {
    if (valor > LIMITE_38398) return LIMITE_38398;
    return valor * FACTOR_38398;
}
