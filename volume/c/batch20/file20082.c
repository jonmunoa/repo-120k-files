// fichero 20082 -- macros y constantes
#define LIMITE_20082 20182
#define FACTOR_20082 3

int aplicar_limite20082(int valor) {
    if (valor > LIMITE_20082) return LIMITE_20082;
    return valor * FACTOR_20082;
}
