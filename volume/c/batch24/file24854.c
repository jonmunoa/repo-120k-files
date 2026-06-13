// fichero 24854 -- macros y constantes
#define LIMITE_24854 24954
#define FACTOR_24854 5

int aplicar_limite24854(int valor) {
    if (valor > LIMITE_24854) return LIMITE_24854;
    return valor * FACTOR_24854;
}
