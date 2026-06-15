// fichero 43374 -- macros y constantes -- MODIFICADO
#define LIMITE_43374 43574
#define FACTOR_43374 6

int aplicar_limite43374(int valor) {
    if (valor > LIMITE_43374) return LIMITE_43374;
    return valor * FACTOR_43374;
}
