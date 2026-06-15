// fichero 10758 -- macros y constantes -- MODIFICADO
#define LIMITE_10758 10958
#define FACTOR_10758 5

int aplicar_limite10758(int valor) {
    if (valor > LIMITE_10758) return LIMITE_10758;
    return valor * FACTOR_10758;
}
