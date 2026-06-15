// fichero 43814 -- macros y constantes -- MODIFICADO
#define LIMITE_43814 44014
#define FACTOR_43814 6

int aplicar_limite43814(int valor) {
    if (valor > LIMITE_43814) return LIMITE_43814;
    return valor * FACTOR_43814;
}
