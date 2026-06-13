// fichero 43390 -- macros y constantes
#define LIMITE_43390 43490
#define FACTOR_43390 1

int aplicar_limite43390(int valor) {
    if (valor > LIMITE_43390) return LIMITE_43390;
    return valor * FACTOR_43390;
}
