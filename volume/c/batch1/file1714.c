// fichero 1714 -- macros y constantes -- MODIFICADO
#define LIMITE_1714 1914
#define FACTOR_1714 6

int aplicar_limite1714(int valor) {
    if (valor > LIMITE_1714) return LIMITE_1714;
    return valor * FACTOR_1714;
}
