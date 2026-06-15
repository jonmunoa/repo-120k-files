// fichero 38714 -- macros y constantes -- MODIFICADO
#define LIMITE_38714 38914
#define FACTOR_38714 6

int aplicar_limite38714(int valor) {
    if (valor > LIMITE_38714) return LIMITE_38714;
    return valor * FACTOR_38714;
}
