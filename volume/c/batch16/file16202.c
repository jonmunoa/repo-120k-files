// fichero 16202 -- macros y constantes
#define LIMITE_16202 16302
#define FACTOR_16202 3

int aplicar_limite16202(int valor) {
    if (valor > LIMITE_16202) return LIMITE_16202;
    return valor * FACTOR_16202;
}
