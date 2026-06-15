// fichero 43742 -- macros y constantes -- MODIFICADO
#define LIMITE_43742 43942
#define FACTOR_43742 4

int aplicar_limite43742(int valor) {
    if (valor > LIMITE_43742) return LIMITE_43742;
    return valor * FACTOR_43742;
}
