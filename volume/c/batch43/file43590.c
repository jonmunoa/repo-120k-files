// fichero 43590 -- macros y constantes -- MODIFICADO
#define LIMITE_43590 43790
#define FACTOR_43590 2

int aplicar_limite43590(int valor) {
    if (valor > LIMITE_43590) return LIMITE_43590;
    return valor * FACTOR_43590;
}
