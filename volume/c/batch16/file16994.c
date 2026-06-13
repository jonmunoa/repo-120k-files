// fichero 16994 -- macros y constantes
#define LIMITE_16994 17094
#define FACTOR_16994 5

int aplicar_limite16994(int valor) {
    if (valor > LIMITE_16994) return LIMITE_16994;
    return valor * FACTOR_16994;
}
