// fichero 10314 -- macros y constantes
#define LIMITE_10314 10414
#define FACTOR_10314 5

int aplicar_limite10314(int valor) {
    if (valor > LIMITE_10314) return LIMITE_10314;
    return valor * FACTOR_10314;
}
