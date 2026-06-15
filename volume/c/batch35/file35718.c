// fichero 35718 -- macros y constantes -- MODIFICADO
#define LIMITE_35718 35918
#define FACTOR_35718 5

int aplicar_limite35718(int valor) {
    if (valor > LIMITE_35718) return LIMITE_35718;
    return valor * FACTOR_35718;
}
