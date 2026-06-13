// fichero 12054 -- macros y constantes
#define LIMITE_12054 12154
#define FACTOR_12054 5

int aplicar_limite12054(int valor) {
    if (valor > LIMITE_12054) return LIMITE_12054;
    return valor * FACTOR_12054;
}
