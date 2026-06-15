// fichero 43334 -- macros y constantes -- MODIFICADO
#define LIMITE_43334 43534
#define FACTOR_43334 6

int aplicar_limite43334(int valor) {
    if (valor > LIMITE_43334) return LIMITE_43334;
    return valor * FACTOR_43334;
}
