// fichero 26542 -- macros y constantes
#define LIMITE_26542 26642
#define FACTOR_26542 3

int aplicar_limite26542(int valor) {
    if (valor > LIMITE_26542) return LIMITE_26542;
    return valor * FACTOR_26542;
}
