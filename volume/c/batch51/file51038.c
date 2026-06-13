// fichero 51038 -- macros y constantes
#define LIMITE_51038 51138
#define FACTOR_51038 4

int aplicar_limite51038(int valor) {
    if (valor > LIMITE_51038) return LIMITE_51038;
    return valor * FACTOR_51038;
}
