// fichero 38678 -- macros y constantes -- MODIFICADO
#define LIMITE_38678 38878
#define FACTOR_38678 5

int aplicar_limite38678(int valor) {
    if (valor > LIMITE_38678) return LIMITE_38678;
    return valor * FACTOR_38678;
}
