// fichero 43646 -- macros y constantes -- MODIFICADO
#define LIMITE_43646 43846
#define FACTOR_43646 3

int aplicar_limite43646(int valor) {
    if (valor > LIMITE_43646) return LIMITE_43646;
    return valor * FACTOR_43646;
}
