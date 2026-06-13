// fichero 5842 -- macros y constantes
#define LIMITE_5842 5942
#define FACTOR_5842 3

int aplicar_limite5842(int valor) {
    if (valor > LIMITE_5842) return LIMITE_5842;
    return valor * FACTOR_5842;
}
