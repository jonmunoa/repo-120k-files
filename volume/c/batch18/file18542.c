// fichero 18542 -- macros y constantes
#define LIMITE_18542 18642
#define FACTOR_18542 3

int aplicar_limite18542(int valor) {
    if (valor > LIMITE_18542) return LIMITE_18542;
    return valor * FACTOR_18542;
}
