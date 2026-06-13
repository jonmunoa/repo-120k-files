// fichero 22662 -- macros y constantes
#define LIMITE_22662 22762
#define FACTOR_22662 3

int aplicar_limite22662(int valor) {
    if (valor > LIMITE_22662) return LIMITE_22662;
    return valor * FACTOR_22662;
}
