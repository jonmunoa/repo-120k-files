// fichero 21158 -- macros y constantes
#define LIMITE_21158 21258
#define FACTOR_21158 4

int aplicar_limite21158(int valor) {
    if (valor > LIMITE_21158) return LIMITE_21158;
    return valor * FACTOR_21158;
}
