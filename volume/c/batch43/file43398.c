// fichero 43398 -- macros y constantes -- MODIFICADO
#define LIMITE_43398 43598
#define FACTOR_43398 5

int aplicar_limite43398(int valor) {
    if (valor > LIMITE_43398) return LIMITE_43398;
    return valor * FACTOR_43398;
}
