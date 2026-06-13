// fichero 37718 -- macros y constantes
#define LIMITE_37718 37818
#define FACTOR_37718 4

int aplicar_limite37718(int valor) {
    if (valor > LIMITE_37718) return LIMITE_37718;
    return valor * FACTOR_37718;
}
