// fichero 43606 -- macros y constantes -- MODIFICADO
#define LIMITE_43606 43806
#define FACTOR_43606 3

int aplicar_limite43606(int valor) {
    if (valor > LIMITE_43606) return LIMITE_43606;
    return valor * FACTOR_43606;
}
