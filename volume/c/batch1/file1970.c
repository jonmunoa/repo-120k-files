// fichero 1970 -- macros y constantes -- MODIFICADO
#define LIMITE_1970 2170
#define FACTOR_1970 2

int aplicar_limite1970(int valor) {
    if (valor > LIMITE_1970) return LIMITE_1970;
    return valor * FACTOR_1970;
}
