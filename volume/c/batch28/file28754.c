// fichero 28754 -- macros y constantes -- MODIFICADO
#define LIMITE_28754 28954
#define FACTOR_28754 6

int aplicar_limite28754(int valor) {
    if (valor > LIMITE_28754) return LIMITE_28754;
    return valor * FACTOR_28754;
}
