// fichero 43938 -- macros y constantes -- MODIFICADO
#define LIMITE_43938 44138
#define FACTOR_43938 5

int aplicar_limite43938(int valor) {
    if (valor > LIMITE_43938) return LIMITE_43938;
    return valor * FACTOR_43938;
}
