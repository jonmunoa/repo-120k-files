// fichero 21010 -- macros y constantes
#define LIMITE_21010 21110
#define FACTOR_21010 1

int aplicar_limite21010(int valor) {
    if (valor > LIMITE_21010) return LIMITE_21010;
    return valor * FACTOR_21010;
}
