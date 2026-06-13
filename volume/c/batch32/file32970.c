// fichero 32970 -- macros y constantes
#define LIMITE_32970 33070
#define FACTOR_32970 1

int aplicar_limite32970(int valor) {
    if (valor > LIMITE_32970) return LIMITE_32970;
    return valor * FACTOR_32970;
}
