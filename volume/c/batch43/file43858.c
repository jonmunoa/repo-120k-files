// fichero 43858 -- macros y constantes
#define LIMITE_43858 43958
#define FACTOR_43858 4

int aplicar_limite43858(int valor) {
    if (valor > LIMITE_43858) return LIMITE_43858;
    return valor * FACTOR_43858;
}
