// fichero 43194 -- macros y constantes -- MODIFICADO
#define LIMITE_43194 43394
#define FACTOR_43194 6

int aplicar_limite43194(int valor) {
    if (valor > LIMITE_43194) return LIMITE_43194;
    return valor * FACTOR_43194;
}
