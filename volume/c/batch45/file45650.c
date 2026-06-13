// fichero 45650 -- macros y constantes
#define LIMITE_45650 45750
#define FACTOR_45650 1

int aplicar_limite45650(int valor) {
    if (valor > LIMITE_45650) return LIMITE_45650;
    return valor * FACTOR_45650;
}
