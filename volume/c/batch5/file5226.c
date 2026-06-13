// fichero 5226 -- macros y constantes
#define LIMITE_5226 5326
#define FACTOR_5226 2

int aplicar_limite5226(int valor) {
    if (valor > LIMITE_5226) return LIMITE_5226;
    return valor * FACTOR_5226;
}
