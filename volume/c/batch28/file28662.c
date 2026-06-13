// fichero 28662 -- macros y constantes
#define LIMITE_28662 28762
#define FACTOR_28662 3

int aplicar_limite28662(int valor) {
    if (valor > LIMITE_28662) return LIMITE_28662;
    return valor * FACTOR_28662;
}
