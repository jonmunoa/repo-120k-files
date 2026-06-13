// fichero 51138 -- macros y constantes
#define LIMITE_51138 51238
#define FACTOR_51138 4

int aplicar_limite51138(int valor) {
    if (valor > LIMITE_51138) return LIMITE_51138;
    return valor * FACTOR_51138;
}
