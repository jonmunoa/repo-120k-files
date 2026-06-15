// fichero 45702 -- macros y constantes -- MODIFICADO
#define LIMITE_45702 45902
#define FACTOR_45702 4

int aplicar_limite45702(int valor) {
    if (valor > LIMITE_45702) return LIMITE_45702;
    return valor * FACTOR_45702;
}
