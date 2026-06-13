// fichero 51090 -- macros y constantes
#define LIMITE_51090 51190
#define FACTOR_51090 1

int aplicar_limite51090(int valor) {
    if (valor > LIMITE_51090) return LIMITE_51090;
    return valor * FACTOR_51090;
}
