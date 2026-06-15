// fichero 30714 -- macros y constantes -- MODIFICADO
#define LIMITE_30714 30914
#define FACTOR_30714 6

int aplicar_limite30714(int valor) {
    if (valor > LIMITE_30714) return LIMITE_30714;
    return valor * FACTOR_30714;
}
