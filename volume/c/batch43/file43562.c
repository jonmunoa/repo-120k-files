// fichero 43562 -- macros y constantes
#define LIMITE_43562 43662
#define FACTOR_43562 3

int aplicar_limite43562(int valor) {
    if (valor > LIMITE_43562) return LIMITE_43562;
    return valor * FACTOR_43562;
}
