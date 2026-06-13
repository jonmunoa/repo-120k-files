// fichero 226 -- macros y constantes
#define LIMITE_226 326
#define FACTOR_226 2

int aplicar_limite226(int valor) {
    if (valor > LIMITE_226) return LIMITE_226;
    return valor * FACTOR_226;
}
