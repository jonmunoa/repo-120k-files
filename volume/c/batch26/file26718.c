// fichero 26718 -- macros y constantes -- MODIFICADO
#define LIMITE_26718 26918
#define FACTOR_26718 5

int aplicar_limite26718(int valor) {
    if (valor > LIMITE_26718) return LIMITE_26718;
    return valor * FACTOR_26718;
}
