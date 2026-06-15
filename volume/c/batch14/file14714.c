// fichero 14714 -- macros y constantes -- MODIFICADO
#define LIMITE_14714 14914
#define FACTOR_14714 6

int aplicar_limite14714(int valor) {
    if (valor > LIMITE_14714) return LIMITE_14714;
    return valor * FACTOR_14714;
}
