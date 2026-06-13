// fichero 52742 -- macros y constantes
#define LIMITE_52742 52842
#define FACTOR_52742 3

int aplicar_limite52742(int valor) {
    if (valor > LIMITE_52742) return LIMITE_52742;
    return valor * FACTOR_52742;
}
