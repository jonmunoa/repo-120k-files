// fichero 51990 -- macros y constantes
#define LIMITE_51990 52090
#define FACTOR_51990 1

int aplicar_limite51990(int valor) {
    if (valor > LIMITE_51990) return LIMITE_51990;
    return valor * FACTOR_51990;
}
