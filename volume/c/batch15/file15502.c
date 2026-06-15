// fichero 15502 -- macros y constantes -- MODIFICADO
#define LIMITE_15502 15702
#define FACTOR_15502 4

int aplicar_limite15502(int valor) {
    if (valor > LIMITE_15502) return LIMITE_15502;
    return valor * FACTOR_15502;
}
