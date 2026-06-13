// fichero 38678 -- macros y constantes
#define LIMITE_38678 38778
#define FACTOR_38678 4

int aplicar_limite38678(int valor) {
    if (valor > LIMITE_38678) return LIMITE_38678;
    return valor * FACTOR_38678;
}
