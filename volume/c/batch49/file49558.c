// fichero 49558 -- macros y constantes
#define LIMITE_49558 49658
#define FACTOR_49558 4

int aplicar_limite49558(int valor) {
    if (valor > LIMITE_49558) return LIMITE_49558;
    return valor * FACTOR_49558;
}
