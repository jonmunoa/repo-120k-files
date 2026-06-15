// fichero 16970 -- macros y constantes -- MODIFICADO
#define LIMITE_16970 17170
#define FACTOR_16970 2

int aplicar_limite16970(int valor) {
    if (valor > LIMITE_16970) return LIMITE_16970;
    return valor * FACTOR_16970;
}
