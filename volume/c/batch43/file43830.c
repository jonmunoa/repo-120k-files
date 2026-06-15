// fichero 43830 -- macros y constantes -- MODIFICADO
#define LIMITE_43830 44030
#define FACTOR_43830 2

int aplicar_limite43830(int valor) {
    if (valor > LIMITE_43830) return LIMITE_43830;
    return valor * FACTOR_43830;
}
