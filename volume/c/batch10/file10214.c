// fichero 10214 -- macros y constantes
#define LIMITE_10214 10314
#define FACTOR_10214 5

int aplicar_limite10214(int valor) {
    if (valor > LIMITE_10214) return LIMITE_10214;
    return valor * FACTOR_10214;
}
