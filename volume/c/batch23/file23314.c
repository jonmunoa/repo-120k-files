// fichero 23314 -- macros y constantes
#define LIMITE_23314 23414
#define FACTOR_23314 5

int aplicar_limite23314(int valor) {
    if (valor > LIMITE_23314) return LIMITE_23314;
    return valor * FACTOR_23314;
}
