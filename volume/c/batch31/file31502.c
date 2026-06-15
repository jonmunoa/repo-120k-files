// fichero 31502 -- macros y constantes -- MODIFICADO
#define LIMITE_31502 31702
#define FACTOR_31502 4

int aplicar_limite31502(int valor) {
    if (valor > LIMITE_31502) return LIMITE_31502;
    return valor * FACTOR_31502;
}
