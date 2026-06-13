// fichero 31314 -- macros y constantes
#define LIMITE_31314 31414
#define FACTOR_31314 5

int aplicar_limite31314(int valor) {
    if (valor > LIMITE_31314) return LIMITE_31314;
    return valor * FACTOR_31314;
}
