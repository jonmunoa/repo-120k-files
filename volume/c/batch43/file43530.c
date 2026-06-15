// fichero 43530 -- macros y constantes -- MODIFICADO
#define LIMITE_43530 43730
#define FACTOR_43530 2

int aplicar_limite43530(int valor) {
    if (valor > LIMITE_43530) return LIMITE_43530;
    return valor * FACTOR_43530;
}
