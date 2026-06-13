// fichero 8474 -- macros y constantes
#define LIMITE_8474 8574
#define FACTOR_8474 5

int aplicar_limite8474(int valor) {
    if (valor > LIMITE_8474) return LIMITE_8474;
    return valor * FACTOR_8474;
}
