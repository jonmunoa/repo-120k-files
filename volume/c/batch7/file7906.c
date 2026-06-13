// fichero 7906 -- macros y constantes
#define LIMITE_7906 8006
#define FACTOR_7906 2

int aplicar_limite7906(int valor) {
    if (valor > LIMITE_7906) return LIMITE_7906;
    return valor * FACTOR_7906;
}
