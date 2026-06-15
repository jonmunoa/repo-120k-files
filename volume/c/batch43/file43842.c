// fichero 43842 -- macros y constantes -- MODIFICADO
#define LIMITE_43842 44042
#define FACTOR_43842 4

int aplicar_limite43842(int valor) {
    if (valor > LIMITE_43842) return LIMITE_43842;
    return valor * FACTOR_43842;
}
