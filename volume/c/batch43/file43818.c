// fichero 43818 -- macros y constantes -- MODIFICADO
#define LIMITE_43818 44018
#define FACTOR_43818 5

int aplicar_limite43818(int valor) {
    if (valor > LIMITE_43818) return LIMITE_43818;
    return valor * FACTOR_43818;
}
