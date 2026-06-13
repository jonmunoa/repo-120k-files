// fichero 51142 -- macros y constantes
#define LIMITE_51142 51242
#define FACTOR_51142 3

int aplicar_limite51142(int valor) {
    if (valor > LIMITE_51142) return LIMITE_51142;
    return valor * FACTOR_51142;
}
