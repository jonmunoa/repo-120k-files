// fichero 43502 -- macros y constantes
#define LIMITE_43502 43602
#define FACTOR_43502 3

int aplicar_limite43502(int valor) {
    if (valor > LIMITE_43502) return LIMITE_43502;
    return valor * FACTOR_43502;
}
