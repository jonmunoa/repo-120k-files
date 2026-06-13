// fichero 12314 -- macros y constantes
#define LIMITE_12314 12414
#define FACTOR_12314 5

int aplicar_limite12314(int valor) {
    if (valor > LIMITE_12314) return LIMITE_12314;
    return valor * FACTOR_12314;
}
