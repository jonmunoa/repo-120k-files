// fichero 43166 -- macros y constantes -- MODIFICADO
#define LIMITE_43166 43366
#define FACTOR_43166 3

int aplicar_limite43166(int valor) {
    if (valor > LIMITE_43166) return LIMITE_43166;
    return valor * FACTOR_43166;
}
