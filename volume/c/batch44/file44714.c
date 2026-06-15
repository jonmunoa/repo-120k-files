// fichero 44714 -- macros y constantes -- MODIFICADO
#define LIMITE_44714 44914
#define FACTOR_44714 6

int aplicar_limite44714(int valor) {
    if (valor > LIMITE_44714) return LIMITE_44714;
    return valor * FACTOR_44714;
}
