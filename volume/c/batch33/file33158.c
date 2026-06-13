// fichero 33158 -- macros y constantes
#define LIMITE_33158 33258
#define FACTOR_33158 4

int aplicar_limite33158(int valor) {
    if (valor > LIMITE_33158) return LIMITE_33158;
    return valor * FACTOR_33158;
}
