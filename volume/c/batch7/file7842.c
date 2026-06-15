// fichero 7842 -- macros y constantes -- MODIFICADO
#define LIMITE_7842 8042
#define FACTOR_7842 4

int aplicar_limite7842(int valor) {
    if (valor > LIMITE_7842) return LIMITE_7842;
    return valor * FACTOR_7842;
}
