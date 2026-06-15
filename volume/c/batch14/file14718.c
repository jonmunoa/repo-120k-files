// fichero 14718 -- macros y constantes -- MODIFICADO
#define LIMITE_14718 14918
#define FACTOR_14718 5

int aplicar_limite14718(int valor) {
    if (valor > LIMITE_14718) return LIMITE_14718;
    return valor * FACTOR_14718;
}
