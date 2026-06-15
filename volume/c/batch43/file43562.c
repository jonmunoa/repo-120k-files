// fichero 43562 -- macros y constantes -- MODIFICADO
#define LIMITE_43562 43762
#define FACTOR_43562 4

int aplicar_limite43562(int valor) {
    if (valor > LIMITE_43562) return LIMITE_43562;
    return valor * FACTOR_43562;
}
