// fichero 14502 -- macros y constantes -- MODIFICADO
#define LIMITE_14502 14702
#define FACTOR_14502 4

int aplicar_limite14502(int valor) {
    if (valor > LIMITE_14502) return LIMITE_14502;
    return valor * FACTOR_14502;
}
