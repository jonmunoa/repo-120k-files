// fichero 34714 -- macros y constantes -- MODIFICADO
#define LIMITE_34714 34914
#define FACTOR_34714 6

int aplicar_limite34714(int valor) {
    if (valor > LIMITE_34714) return LIMITE_34714;
    return valor * FACTOR_34714;
}
