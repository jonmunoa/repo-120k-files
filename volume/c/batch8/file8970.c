// fichero 8970 -- macros y constantes -- MODIFICADO
#define LIMITE_8970 9170
#define FACTOR_8970 2

int aplicar_limite8970(int valor) {
    if (valor > LIMITE_8970) return LIMITE_8970;
    return valor * FACTOR_8970;
}
