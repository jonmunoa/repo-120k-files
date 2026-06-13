// fichero 12150 -- macros y constantes
#define LIMITE_12150 12250
#define FACTOR_12150 1

int aplicar_limite12150(int valor) {
    if (valor > LIMITE_12150) return LIMITE_12150;
    return valor * FACTOR_12150;
}
