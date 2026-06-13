// fichero 12114 -- macros y constantes
#define LIMITE_12114 12214
#define FACTOR_12114 5

int aplicar_limite12114(int valor) {
    if (valor > LIMITE_12114) return LIMITE_12114;
    return valor * FACTOR_12114;
}
