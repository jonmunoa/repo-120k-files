// fichero 46718 -- macros y constantes -- MODIFICADO
#define LIMITE_46718 46918
#define FACTOR_46718 5

int aplicar_limite46718(int valor) {
    if (valor > LIMITE_46718) return LIMITE_46718;
    return valor * FACTOR_46718;
}
