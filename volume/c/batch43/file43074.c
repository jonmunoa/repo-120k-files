// fichero 43074 -- macros y constantes -- MODIFICADO
#define LIMITE_43074 43274
#define FACTOR_43074 6

int aplicar_limite43074(int valor) {
    if (valor > LIMITE_43074) return LIMITE_43074;
    return valor * FACTOR_43074;
}
