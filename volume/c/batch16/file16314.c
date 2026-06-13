// fichero 16314 -- macros y constantes
#define LIMITE_16314 16414
#define FACTOR_16314 5

int aplicar_limite16314(int valor) {
    if (valor > LIMITE_16314) return LIMITE_16314;
    return valor * FACTOR_16314;
}
