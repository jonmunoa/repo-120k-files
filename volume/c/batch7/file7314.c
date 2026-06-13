// fichero 7314 -- macros y constantes
#define LIMITE_7314 7414
#define FACTOR_7314 5

int aplicar_limite7314(int valor) {
    if (valor > LIMITE_7314) return LIMITE_7314;
    return valor * FACTOR_7314;
}
