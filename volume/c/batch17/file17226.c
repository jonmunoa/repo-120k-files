// fichero 17226 -- macros y constantes
#define LIMITE_17226 17326
#define FACTOR_17226 2

int aplicar_limite17226(int valor) {
    if (valor > LIMITE_17226) return LIMITE_17226;
    return valor * FACTOR_17226;
}
