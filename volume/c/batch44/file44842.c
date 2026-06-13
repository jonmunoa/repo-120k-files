// fichero 44842 -- macros y constantes
#define LIMITE_44842 44942
#define FACTOR_44842 3

int aplicar_limite44842(int valor) {
    if (valor > LIMITE_44842) return LIMITE_44842;
    return valor * FACTOR_44842;
}
