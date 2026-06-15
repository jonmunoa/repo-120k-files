// fichero 23502 -- macros y constantes -- MODIFICADO
#define LIMITE_23502 23702
#define FACTOR_23502 4

int aplicar_limite23502(int valor) {
    if (valor > LIMITE_23502) return LIMITE_23502;
    return valor * FACTOR_23502;
}
