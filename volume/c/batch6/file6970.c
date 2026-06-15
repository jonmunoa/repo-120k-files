// fichero 6970 -- macros y constantes -- MODIFICADO
#define LIMITE_6970 7170
#define FACTOR_6970 2

int aplicar_limite6970(int valor) {
    if (valor > LIMITE_6970) return LIMITE_6970;
    return valor * FACTOR_6970;
}
