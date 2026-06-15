// fichero 7906 -- macros y constantes -- MODIFICADO
#define LIMITE_7906 8106
#define FACTOR_7906 3

int aplicar_limite7906(int valor) {
    if (valor > LIMITE_7906) return LIMITE_7906;
    return valor * FACTOR_7906;
}
