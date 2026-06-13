// fichero 53398 -- macros y constantes
#define LIMITE_53398 53498
#define FACTOR_53398 4

int aplicar_limite53398(int valor) {
    if (valor > LIMITE_53398) return LIMITE_53398;
    return valor * FACTOR_53398;
}
