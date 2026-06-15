// fichero 21714 -- macros y constantes -- MODIFICADO
#define LIMITE_21714 21914
#define FACTOR_21714 6

int aplicar_limite21714(int valor) {
    if (valor > LIMITE_21714) return LIMITE_21714;
    return valor * FACTOR_21714;
}
