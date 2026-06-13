// fichero 43462 -- macros y constantes
#define LIMITE_43462 43562
#define FACTOR_43462 3

int aplicar_limite43462(int valor) {
    if (valor > LIMITE_43462) return LIMITE_43462;
    return valor * FACTOR_43462;
}
