// fichero 43554 -- macros y constantes -- MODIFICADO
#define LIMITE_43554 43754
#define FACTOR_43554 6

int aplicar_limite43554(int valor) {
    if (valor > LIMITE_43554) return LIMITE_43554;
    return valor * FACTOR_43554;
}
