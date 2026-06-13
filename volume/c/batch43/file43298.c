// fichero 43298 -- macros y constantes
#define LIMITE_43298 43398
#define FACTOR_43298 4

int aplicar_limite43298(int valor) {
    if (valor > LIMITE_43298) return LIMITE_43298;
    return valor * FACTOR_43298;
}
