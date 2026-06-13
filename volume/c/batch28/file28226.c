// fichero 28226 -- macros y constantes
#define LIMITE_28226 28326
#define FACTOR_28226 2

int aplicar_limite28226(int valor) {
    if (valor > LIMITE_28226) return LIMITE_28226;
    return valor * FACTOR_28226;
}
