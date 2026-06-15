// fichero 2970 -- macros y constantes -- MODIFICADO
#define LIMITE_2970 3170
#define FACTOR_2970 2

int aplicar_limite2970(int valor) {
    if (valor > LIMITE_2970) return LIMITE_2970;
    return valor * FACTOR_2970;
}
