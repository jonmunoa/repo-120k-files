// fichero 15970 -- macros y constantes -- MODIFICADO
#define LIMITE_15970 16170
#define FACTOR_15970 2

int aplicar_limite15970(int valor) {
    if (valor > LIMITE_15970) return LIMITE_15970;
    return valor * FACTOR_15970;
}
