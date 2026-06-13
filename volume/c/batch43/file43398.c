// fichero 43398 -- macros y constantes
#define LIMITE_43398 43498
#define FACTOR_43398 4

int aplicar_limite43398(int valor) {
    if (valor > LIMITE_43398) return LIMITE_43398;
    return valor * FACTOR_43398;
}
