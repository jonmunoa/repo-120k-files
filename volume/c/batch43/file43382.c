// fichero 43382 -- macros y constantes -- MODIFICADO
#define LIMITE_43382 43582
#define FACTOR_43382 4

int aplicar_limite43382(int valor) {
    if (valor > LIMITE_43382) return LIMITE_43382;
    return valor * FACTOR_43382;
}
