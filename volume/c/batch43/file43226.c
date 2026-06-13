// fichero 43226 -- macros y constantes
#define LIMITE_43226 43326
#define FACTOR_43226 2

int aplicar_limite43226(int valor) {
    if (valor > LIMITE_43226) return LIMITE_43226;
    return valor * FACTOR_43226;
}
