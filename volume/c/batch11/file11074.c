// fichero 11074 -- macros y constantes
#define LIMITE_11074 11174
#define FACTOR_11074 5

int aplicar_limite11074(int valor) {
    if (valor > LIMITE_11074) return LIMITE_11074;
    return valor * FACTOR_11074;
}
