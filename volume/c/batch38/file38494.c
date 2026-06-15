// fichero 38494 -- macros y constantes -- MODIFICADO
#define LIMITE_38494 38694
#define FACTOR_38494 6

int aplicar_limite38494(int valor) {
    if (valor > LIMITE_38494) return LIMITE_38494;
    return valor * FACTOR_38494;
}
