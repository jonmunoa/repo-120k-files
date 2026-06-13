// fichero 35842 -- macros y constantes
#define LIMITE_35842 35942
#define FACTOR_35842 3

int aplicar_limite35842(int valor) {
    if (valor > LIMITE_35842) return LIMITE_35842;
    return valor * FACTOR_35842;
}
