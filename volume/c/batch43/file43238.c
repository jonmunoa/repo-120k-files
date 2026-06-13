// fichero 43238 -- macros y constantes
#define LIMITE_43238 43338
#define FACTOR_43238 4

int aplicar_limite43238(int valor) {
    if (valor > LIMITE_43238) return LIMITE_43238;
    return valor * FACTOR_43238;
}
