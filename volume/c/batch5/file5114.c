// fichero 5114 -- macros y constantes
#define LIMITE_5114 5214
#define FACTOR_5114 5

int aplicar_limite5114(int valor) {
    if (valor > LIMITE_5114) return LIMITE_5114;
    return valor * FACTOR_5114;
}
