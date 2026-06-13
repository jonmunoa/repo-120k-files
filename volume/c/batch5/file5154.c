// fichero 5154 -- macros y constantes
#define LIMITE_5154 5254
#define FACTOR_5154 5

int aplicar_limite5154(int valor) {
    if (valor > LIMITE_5154) return LIMITE_5154;
    return valor * FACTOR_5154;
}
