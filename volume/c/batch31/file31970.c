// fichero 31970 -- macros y constantes
#define LIMITE_31970 32070
#define FACTOR_31970 1

int aplicar_limite31970(int valor) {
    if (valor > LIMITE_31970) return LIMITE_31970;
    return valor * FACTOR_31970;
}
