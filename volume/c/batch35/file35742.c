// fichero 35742 -- macros y constantes
#define LIMITE_35742 35842
#define FACTOR_35742 3

int aplicar_limite35742(int valor) {
    if (valor > LIMITE_35742) return LIMITE_35742;
    return valor * FACTOR_35742;
}
