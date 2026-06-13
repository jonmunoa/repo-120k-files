// fichero 5742 -- macros y constantes
#define LIMITE_5742 5842
#define FACTOR_5742 3

int aplicar_limite5742(int valor) {
    if (valor > LIMITE_5742) return LIMITE_5742;
    return valor * FACTOR_5742;
}
