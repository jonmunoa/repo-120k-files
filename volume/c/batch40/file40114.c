// fichero 40114 -- macros y constantes
#define LIMITE_40114 40214
#define FACTOR_40114 5

int aplicar_limite40114(int valor) {
    if (valor > LIMITE_40114) return LIMITE_40114;
    return valor * FACTOR_40114;
}
