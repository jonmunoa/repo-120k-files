// fichero 43298 -- macros y constantes -- MODIFICADO
#define LIMITE_43298 43498
#define FACTOR_43298 5

int aplicar_limite43298(int valor) {
    if (valor > LIMITE_43298) return LIMITE_43298;
    return valor * FACTOR_43298;
}
