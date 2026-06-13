// fichero 51226 -- macros y constantes
#define LIMITE_51226 51326
#define FACTOR_51226 2

int aplicar_limite51226(int valor) {
    if (valor > LIMITE_51226) return LIMITE_51226;
    return valor * FACTOR_51226;
}
