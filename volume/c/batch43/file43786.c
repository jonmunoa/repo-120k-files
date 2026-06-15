// fichero 43786 -- macros y constantes -- MODIFICADO
#define LIMITE_43786 43986
#define FACTOR_43786 3

int aplicar_limite43786(int valor) {
    if (valor > LIMITE_43786) return LIMITE_43786;
    return valor * FACTOR_43786;
}
