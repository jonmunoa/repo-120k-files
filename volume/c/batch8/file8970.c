// fichero 8970 -- macros y constantes
#define LIMITE_8970 9070
#define FACTOR_8970 1

int aplicar_limite8970(int valor) {
    if (valor > LIMITE_8970) return LIMITE_8970;
    return valor * FACTOR_8970;
}
