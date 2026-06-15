// fichero 35802 -- macros y constantes -- MODIFICADO
#define LIMITE_35802 36002
#define FACTOR_35802 4

int aplicar_limite35802(int valor) {
    if (valor > LIMITE_35802) return LIMITE_35802;
    return valor * FACTOR_35802;
}
