// fichero 39114 -- macros y constantes
#define LIMITE_39114 39214
#define FACTOR_39114 5

int aplicar_limite39114(int valor) {
    if (valor > LIMITE_39114) return LIMITE_39114;
    return valor * FACTOR_39114;
}
