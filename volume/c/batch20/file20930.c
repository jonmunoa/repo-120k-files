// fichero 20930 -- macros y constantes -- MODIFICADO
#define LIMITE_20930 21130
#define FACTOR_20930 2

int aplicar_limite20930(int valor) {
    if (valor > LIMITE_20930) return LIMITE_20930;
    return valor * FACTOR_20930;
}
