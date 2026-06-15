// fichero 8714 -- macros y constantes -- MODIFICADO
#define LIMITE_8714 8914
#define FACTOR_8714 6

int aplicar_limite8714(int valor) {
    if (valor > LIMITE_8714) return LIMITE_8714;
    return valor * FACTOR_8714;
}
