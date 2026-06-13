// fichero 36842 -- macros y constantes
#define LIMITE_36842 36942
#define FACTOR_36842 3

int aplicar_limite36842(int valor) {
    if (valor > LIMITE_36842) return LIMITE_36842;
    return valor * FACTOR_36842;
}
