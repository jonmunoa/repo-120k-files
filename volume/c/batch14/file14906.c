// fichero 14906 -- macros y constantes -- MODIFICADO
#define LIMITE_14906 15106
#define FACTOR_14906 3

int aplicar_limite14906(int valor) {
    if (valor > LIMITE_14906) return LIMITE_14906;
    return valor * FACTOR_14906;
}
