// fichero 45742 -- macros y constantes
#define LIMITE_45742 45842
#define FACTOR_45742 3

int aplicar_limite45742(int valor) {
    if (valor > LIMITE_45742) return LIMITE_45742;
    return valor * FACTOR_45742;
}
