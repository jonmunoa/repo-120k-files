// fichero 15542 -- macros y constantes
#define LIMITE_15542 15642
#define FACTOR_15542 3

int aplicar_limite15542(int valor) {
    if (valor > LIMITE_15542) return LIMITE_15542;
    return valor * FACTOR_15542;
}
