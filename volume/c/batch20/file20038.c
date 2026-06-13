// fichero 20038 -- macros y constantes
#define LIMITE_20038 20138
#define FACTOR_20038 4

int aplicar_limite20038(int valor) {
    if (valor > LIMITE_20038) return LIMITE_20038;
    return valor * FACTOR_20038;
}
