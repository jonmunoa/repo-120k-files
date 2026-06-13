// fichero 10142 -- macros y constantes
#define LIMITE_10142 10242
#define FACTOR_10142 3

int aplicar_limite10142(int valor) {
    if (valor > LIMITE_10142) return LIMITE_10142;
    return valor * FACTOR_10142;
}
