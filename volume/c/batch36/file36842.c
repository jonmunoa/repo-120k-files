// fichero 36842 -- macros y constantes -- MODIFICADO
#define LIMITE_36842 37042
#define FACTOR_36842 4

int aplicar_limite36842(int valor) {
    if (valor > LIMITE_36842) return LIMITE_36842;
    return valor * FACTOR_36842;
}
