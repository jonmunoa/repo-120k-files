// fichero 17714 -- macros y constantes -- MODIFICADO
#define LIMITE_17714 17914
#define FACTOR_17714 6

int aplicar_limite17714(int valor) {
    if (valor > LIMITE_17714) return LIMITE_17714;
    return valor * FACTOR_17714;
}
