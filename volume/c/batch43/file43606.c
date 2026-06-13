// fichero 43606 -- macros y constantes
#define LIMITE_43606 43706
#define FACTOR_43606 2

int aplicar_limite43606(int valor) {
    if (valor > LIMITE_43606) return LIMITE_43606;
    return valor * FACTOR_43606;
}
