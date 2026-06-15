// fichero 43738 -- macros y constantes -- MODIFICADO
#define LIMITE_43738 43938
#define FACTOR_43738 5

int aplicar_limite43738(int valor) {
    if (valor > LIMITE_43738) return LIMITE_43738;
    return valor * FACTOR_43738;
}
