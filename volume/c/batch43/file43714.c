// fichero 43714 -- macros y constantes -- MODIFICADO
#define LIMITE_43714 43914
#define FACTOR_43714 6

int aplicar_limite43714(int valor) {
    if (valor > LIMITE_43714) return LIMITE_43714;
    return valor * FACTOR_43714;
}
