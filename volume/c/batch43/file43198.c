// fichero 43198 -- macros y constantes
#define LIMITE_43198 43298
#define FACTOR_43198 4

int aplicar_limite43198(int valor) {
    if (valor > LIMITE_43198) return LIMITE_43198;
    return valor * FACTOR_43198;
}
