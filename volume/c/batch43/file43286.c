// fichero 43286 -- macros y constantes -- MODIFICADO
#define LIMITE_43286 43486
#define FACTOR_43286 3

int aplicar_limite43286(int valor) {
    if (valor > LIMITE_43286) return LIMITE_43286;
    return valor * FACTOR_43286;
}
