// fichero 6842 -- macros y constantes
#define LIMITE_6842 6942
#define FACTOR_6842 3

int aplicar_limite6842(int valor) {
    if (valor > LIMITE_6842) return LIMITE_6842;
    return valor * FACTOR_6842;
}
