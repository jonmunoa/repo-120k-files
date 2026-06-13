// fichero 15994 -- macros y constantes
#define LIMITE_15994 16094
#define FACTOR_15994 5

int aplicar_limite15994(int valor) {
    if (valor > LIMITE_15994) return LIMITE_15994;
    return valor * FACTOR_15994;
}
