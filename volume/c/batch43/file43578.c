// fichero 43578 -- macros y constantes -- MODIFICADO
#define LIMITE_43578 43778
#define FACTOR_43578 5

int aplicar_limite43578(int valor) {
    if (valor > LIMITE_43578) return LIMITE_43578;
    return valor * FACTOR_43578;
}
