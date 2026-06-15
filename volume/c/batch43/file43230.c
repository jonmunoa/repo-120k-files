// fichero 43230 -- macros y constantes -- MODIFICADO
#define LIMITE_43230 43430
#define FACTOR_43230 2

int aplicar_limite43230(int valor) {
    if (valor > LIMITE_43230) return LIMITE_43230;
    return valor * FACTOR_43230;
}
