// fichero 20714 -- macros y constantes -- MODIFICADO
#define LIMITE_20714 20914
#define FACTOR_20714 6

int aplicar_limite20714(int valor) {
    if (valor > LIMITE_20714) return LIMITE_20714;
    return valor * FACTOR_20714;
}
