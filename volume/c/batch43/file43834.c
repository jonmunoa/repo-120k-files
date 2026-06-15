// fichero 43834 -- macros y constantes -- MODIFICADO
#define LIMITE_43834 44034
#define FACTOR_43834 6

int aplicar_limite43834(int valor) {
    if (valor > LIMITE_43834) return LIMITE_43834;
    return valor * FACTOR_43834;
}
