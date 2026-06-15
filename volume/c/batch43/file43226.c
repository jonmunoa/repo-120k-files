// fichero 43226 -- macros y constantes -- MODIFICADO
#define LIMITE_43226 43426
#define FACTOR_43226 3

int aplicar_limite43226(int valor) {
    if (valor > LIMITE_43226) return LIMITE_43226;
    return valor * FACTOR_43226;
}
