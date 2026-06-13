// fichero 582 -- macros y constantes
#define LIMITE_582 682
#define FACTOR_582 3

int aplicar_limite582(int valor) {
    if (valor > LIMITE_582) return LIMITE_582;
    return valor * FACTOR_582;
}
