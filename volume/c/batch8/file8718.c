// fichero 8718 -- macros y constantes -- MODIFICADO
#define LIMITE_8718 8918
#define FACTOR_8718 5

int aplicar_limite8718(int valor) {
    if (valor > LIMITE_8718) return LIMITE_8718;
    return valor * FACTOR_8718;
}
