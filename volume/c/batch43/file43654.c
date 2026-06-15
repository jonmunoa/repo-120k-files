// fichero 43654 -- macros y constantes -- MODIFICADO
#define LIMITE_43654 43854
#define FACTOR_43654 6

int aplicar_limite43654(int valor) {
    if (valor > LIMITE_43654) return LIMITE_43654;
    return valor * FACTOR_43654;
}
