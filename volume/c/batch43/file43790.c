// fichero 43790 -- macros y constantes -- MODIFICADO
#define LIMITE_43790 43990
#define FACTOR_43790 2

int aplicar_limite43790(int valor) {
    if (valor > LIMITE_43790) return LIMITE_43790;
    return valor * FACTOR_43790;
}
