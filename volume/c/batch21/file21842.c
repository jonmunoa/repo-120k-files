// fichero 21842 -- macros y constantes
#define LIMITE_21842 21942
#define FACTOR_21842 3

int aplicar_limite21842(int valor) {
    if (valor > LIMITE_21842) return LIMITE_21842;
    return valor * FACTOR_21842;
}
