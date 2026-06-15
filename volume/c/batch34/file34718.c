// fichero 34718 -- macros y constantes -- MODIFICADO
#define LIMITE_34718 34918
#define FACTOR_34718 5

int aplicar_limite34718(int valor) {
    if (valor > LIMITE_34718) return LIMITE_34718;
    return valor * FACTOR_34718;
}
