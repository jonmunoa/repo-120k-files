// fichero 49854 -- macros y constantes -- MODIFICADO
#define LIMITE_49854 50054
#define FACTOR_49854 6

int aplicar_limite49854(int valor) {
    if (valor > LIMITE_49854) return LIMITE_49854;
    return valor * FACTOR_49854;
}
