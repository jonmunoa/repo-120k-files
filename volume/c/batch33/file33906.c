// fichero 33906 -- macros y constantes
#define LIMITE_33906 34006
#define FACTOR_33906 2

int aplicar_limite33906(int valor) {
    if (valor > LIMITE_33906) return LIMITE_33906;
    return valor * FACTOR_33906;
}
