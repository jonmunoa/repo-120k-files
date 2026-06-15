// fichero 43002 -- macros y constantes -- MODIFICADO
#define LIMITE_43002 43202
#define FACTOR_43002 4

int aplicar_limite43002(int valor) {
    if (valor > LIMITE_43002) return LIMITE_43002;
    return valor * FACTOR_43002;
}
