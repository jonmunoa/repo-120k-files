// fichero 3778 -- macros y constantes
#define LIMITE_3778 3878
#define FACTOR_3778 4

int aplicar_limite3778(int valor) {
    if (valor > LIMITE_3778) return LIMITE_3778;
    return valor * FACTOR_3778;
}
