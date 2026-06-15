// fichero 16714 -- macros y constantes -- MODIFICADO
#define LIMITE_16714 16914
#define FACTOR_16714 6

int aplicar_limite16714(int valor) {
    if (valor > LIMITE_16714) return LIMITE_16714;
    return valor * FACTOR_16714;
}
