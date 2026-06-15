// fichero 13502 -- macros y constantes -- MODIFICADO
#define LIMITE_13502 13702
#define FACTOR_13502 4

int aplicar_limite13502(int valor) {
    if (valor > LIMITE_13502) return LIMITE_13502;
    return valor * FACTOR_13502;
}
