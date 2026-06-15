// fichero 43478 -- macros y constantes -- MODIFICADO
#define LIMITE_43478 43678
#define FACTOR_43478 5

int aplicar_limite43478(int valor) {
    if (valor > LIMITE_43478) return LIMITE_43478;
    return valor * FACTOR_43478;
}
