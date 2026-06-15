// fichero 36714 -- macros y constantes -- MODIFICADO
#define LIMITE_36714 36914
#define FACTOR_36714 6

int aplicar_limite36714(int valor) {
    if (valor > LIMITE_36714) return LIMITE_36714;
    return valor * FACTOR_36714;
}
