// fichero 43314 -- macros y constantes
#define LIMITE_43314 43414
#define FACTOR_43314 5

int aplicar_limite43314(int valor) {
    if (valor > LIMITE_43314) return LIMITE_43314;
    return valor * FACTOR_43314;
}
