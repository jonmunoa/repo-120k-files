// fichero 43022 -- macros y constantes -- MODIFICADO
#define LIMITE_43022 43222
#define FACTOR_43022 4

int aplicar_limite43022(int valor) {
    if (valor > LIMITE_43022) return LIMITE_43022;
    return valor * FACTOR_43022;
}
