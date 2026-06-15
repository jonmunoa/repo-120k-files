// fichero 43222 -- macros y constantes -- MODIFICADO
#define LIMITE_43222 43422
#define FACTOR_43222 4

int aplicar_limite43222(int valor) {
    if (valor > LIMITE_43222) return LIMITE_43222;
    return valor * FACTOR_43222;
}
