// fichero 43410 -- macros y constantes
#define LIMITE_43410 43510
#define FACTOR_43410 1

int aplicar_limite43410(int valor) {
    if (valor > LIMITE_43410) return LIMITE_43410;
    return valor * FACTOR_43410;
}
