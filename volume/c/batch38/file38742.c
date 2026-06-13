// fichero 38742 -- macros y constantes
#define LIMITE_38742 38842
#define FACTOR_38742 3

int aplicar_limite38742(int valor) {
    if (valor > LIMITE_38742) return LIMITE_38742;
    return valor * FACTOR_38742;
}
