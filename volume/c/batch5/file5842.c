// fichero 5842 -- macros y constantes -- MODIFICADO
#define LIMITE_5842 6042
#define FACTOR_5842 4

int aplicar_limite5842(int valor) {
    if (valor > LIMITE_5842) return LIMITE_5842;
    return valor * FACTOR_5842;
}
