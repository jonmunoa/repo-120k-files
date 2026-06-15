// fichero 35970 -- macros y constantes -- MODIFICADO
#define LIMITE_35970 36170
#define FACTOR_35970 2

int aplicar_limite35970(int valor) {
    if (valor > LIMITE_35970) return LIMITE_35970;
    return valor * FACTOR_35970;
}
