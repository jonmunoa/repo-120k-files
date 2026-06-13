// fichero 10506 -- macros y constantes
#define LIMITE_10506 10606
#define FACTOR_10506 2

int aplicar_limite10506(int valor) {
    if (valor > LIMITE_10506) return LIMITE_10506;
    return valor * FACTOR_10506;
}
