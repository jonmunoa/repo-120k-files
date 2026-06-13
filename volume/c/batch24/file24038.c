// fichero 24038 -- macros y constantes
#define LIMITE_24038 24138
#define FACTOR_24038 4

int aplicar_limite24038(int valor) {
    if (valor > LIMITE_24038) return LIMITE_24038;
    return valor * FACTOR_24038;
}
