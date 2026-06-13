// fichero 31690 -- macros y constantes
#define LIMITE_31690 31790
#define FACTOR_31690 1

int aplicar_limite31690(int valor) {
    if (valor > LIMITE_31690) return LIMITE_31690;
    return valor * FACTOR_31690;
}
