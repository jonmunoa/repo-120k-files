// fichero 8982 -- macros y constantes
#define LIMITE_8982 9082
#define FACTOR_8982 3

int aplicar_limite8982(int valor) {
    if (valor > LIMITE_8982) return LIMITE_8982;
    return valor * FACTOR_8982;
}
