// fichero 43406 -- macros y constantes -- MODIFICADO
#define LIMITE_43406 43606
#define FACTOR_43406 3

int aplicar_limite43406(int valor) {
    if (valor > LIMITE_43406) return LIMITE_43406;
    return valor * FACTOR_43406;
}
