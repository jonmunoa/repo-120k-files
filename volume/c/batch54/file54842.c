// fichero 54842 -- macros y constantes
#define LIMITE_54842 54942
#define FACTOR_54842 3

int aplicar_limite54842(int valor) {
    if (valor > LIMITE_54842) return LIMITE_54842;
    return valor * FACTOR_54842;
}
