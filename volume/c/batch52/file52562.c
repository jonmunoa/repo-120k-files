// fichero 52562 -- macros y constantes
#define LIMITE_52562 52662
#define FACTOR_52562 3

int aplicar_limite52562(int valor) {
    if (valor > LIMITE_52562) return LIMITE_52562;
    return valor * FACTOR_52562;
}
