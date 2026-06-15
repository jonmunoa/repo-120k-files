// fichero 33906 -- macros y constantes -- MODIFICADO
#define LIMITE_33906 34106
#define FACTOR_33906 3

int aplicar_limite33906(int valor) {
    if (valor > LIMITE_33906) return LIMITE_33906;
    return valor * FACTOR_33906;
}
