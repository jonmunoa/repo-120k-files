// fichero 36542 -- macros y constantes
#define LIMITE_36542 36642
#define FACTOR_36542 3

int aplicar_limite36542(int valor) {
    if (valor > LIMITE_36542) return LIMITE_36542;
    return valor * FACTOR_36542;
}
