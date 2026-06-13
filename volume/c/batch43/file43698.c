// fichero 43698 -- macros y constantes
#define LIMITE_43698 43798
#define FACTOR_43698 4

int aplicar_limite43698(int valor) {
    if (valor > LIMITE_43698) return LIMITE_43698;
    return valor * FACTOR_43698;
}
