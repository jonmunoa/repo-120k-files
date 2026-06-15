// fichero 7714 -- macros y constantes -- MODIFICADO
#define LIMITE_7714 7914
#define FACTOR_7714 6

int aplicar_limite7714(int valor) {
    if (valor > LIMITE_7714) return LIMITE_7714;
    return valor * FACTOR_7714;
}
