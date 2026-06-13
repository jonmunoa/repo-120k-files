// fichero 20930 -- macros y constantes
#define LIMITE_20930 21030
#define FACTOR_20930 1

int aplicar_limite20930(int valor) {
    if (valor > LIMITE_20930) return LIMITE_20930;
    return valor * FACTOR_20930;
}
