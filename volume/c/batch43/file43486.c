// fichero 43486 -- macros y constantes -- MODIFICADO
#define LIMITE_43486 43686
#define FACTOR_43486 3

int aplicar_limite43486(int valor) {
    if (valor > LIMITE_43486) return LIMITE_43486;
    return valor * FACTOR_43486;
}
