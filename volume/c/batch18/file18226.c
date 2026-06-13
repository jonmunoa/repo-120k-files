// fichero 18226 -- macros y constantes
#define LIMITE_18226 18326
#define FACTOR_18226 2

int aplicar_limite18226(int valor) {
    if (valor > LIMITE_18226) return LIMITE_18226;
    return valor * FACTOR_18226;
}
