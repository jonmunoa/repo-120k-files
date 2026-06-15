// fichero 28714 -- macros y constantes -- MODIFICADO
#define LIMITE_28714 28914
#define FACTOR_28714 6

int aplicar_limite28714(int valor) {
    if (valor > LIMITE_28714) return LIMITE_28714;
    return valor * FACTOR_28714;
}
