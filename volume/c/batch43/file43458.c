// fichero 43458 -- macros y constantes
#define LIMITE_43458 43558
#define FACTOR_43458 4

int aplicar_limite43458(int valor) {
    if (valor > LIMITE_43458) return LIMITE_43458;
    return valor * FACTOR_43458;
}
