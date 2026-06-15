// fichero 43558 -- macros y constantes -- MODIFICADO
#define LIMITE_43558 43758
#define FACTOR_43558 5

int aplicar_limite43558(int valor) {
    if (valor > LIMITE_43558) return LIMITE_43558;
    return valor * FACTOR_43558;
}
