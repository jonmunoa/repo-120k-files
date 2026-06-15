// fichero 18714 -- macros y constantes -- MODIFICADO
#define LIMITE_18714 18914
#define FACTOR_18714 6

int aplicar_limite18714(int valor) {
    if (valor > LIMITE_18714) return LIMITE_18714;
    return valor * FACTOR_18714;
}
