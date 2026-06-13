// fichero 13718 -- macros y constantes
#define LIMITE_13718 13818
#define FACTOR_13718 4

int aplicar_limite13718(int valor) {
    if (valor > LIMITE_13718) return LIMITE_13718;
    return valor * FACTOR_13718;
}
