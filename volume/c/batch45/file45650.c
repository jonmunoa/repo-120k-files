// fichero 45650 -- macros y constantes -- MODIFICADO
#define LIMITE_45650 45850
#define FACTOR_45650 2

int aplicar_limite45650(int valor) {
    if (valor > LIMITE_45650) return LIMITE_45650;
    return valor * FACTOR_45650;
}
