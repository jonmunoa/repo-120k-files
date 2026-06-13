// fichero 50842 -- macros y constantes
#define LIMITE_50842 50942
#define FACTOR_50842 3

int aplicar_limite50842(int valor) {
    if (valor > LIMITE_50842) return LIMITE_50842;
    return valor * FACTOR_50842;
}
