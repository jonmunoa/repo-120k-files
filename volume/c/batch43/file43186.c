// fichero 43186 -- macros y constantes
#define LIMITE_43186 43286
#define FACTOR_43186 2

int aplicar_limite43186(int valor) {
    if (valor > LIMITE_43186) return LIMITE_43186;
    return valor * FACTOR_43186;
}
