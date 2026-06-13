// fichero 51350 -- macros y constantes
#define LIMITE_51350 51450
#define FACTOR_51350 1

int aplicar_limite51350(int valor) {
    if (valor > LIMITE_51350) return LIMITE_51350;
    return valor * FACTOR_51350;
}
