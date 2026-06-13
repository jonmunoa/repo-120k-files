// fichero 43842 -- macros y constantes
#define LIMITE_43842 43942
#define FACTOR_43842 3

int aplicar_limite43842(int valor) {
    if (valor > LIMITE_43842) return LIMITE_43842;
    return valor * FACTOR_43842;
}
