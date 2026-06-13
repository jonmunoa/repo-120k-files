// fichero 21226 -- macros y constantes
#define LIMITE_21226 21326
#define FACTOR_21226 2

int aplicar_limite21226(int valor) {
    if (valor > LIMITE_21226) return LIMITE_21226;
    return valor * FACTOR_21226;
}
