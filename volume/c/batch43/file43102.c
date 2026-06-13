// fichero 43102 -- macros y constantes
#define LIMITE_43102 43202
#define FACTOR_43102 3

int aplicar_limite43102(int valor) {
    if (valor > LIMITE_43102) return LIMITE_43102;
    return valor * FACTOR_43102;
}
