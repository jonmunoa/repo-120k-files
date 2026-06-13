// fichero 14842 -- macros y constantes
#define LIMITE_14842 14942
#define FACTOR_14842 3

int aplicar_limite14842(int valor) {
    if (valor > LIMITE_14842) return LIMITE_14842;
    return valor * FACTOR_14842;
}
