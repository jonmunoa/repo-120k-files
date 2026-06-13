// fichero 7842 -- macros y constantes
#define LIMITE_7842 7942
#define FACTOR_7842 3

int aplicar_limite7842(int valor) {
    if (valor > LIMITE_7842) return LIMITE_7842;
    return valor * FACTOR_7842;
}
