// fichero 25522 -- macros y constantes
#define LIMITE_25522 25622
#define FACTOR_25522 3

int aplicar_limite25522(int valor) {
    if (valor > LIMITE_25522) return LIMITE_25522;
    return valor * FACTOR_25522;
}
