// fichero 32970 -- macros y constantes -- MODIFICADO
#define LIMITE_32970 33170
#define FACTOR_32970 2

int aplicar_limite32970(int valor) {
    if (valor > LIMITE_32970) return LIMITE_32970;
    return valor * FACTOR_32970;
}
