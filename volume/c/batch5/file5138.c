// fichero 5138 -- macros y constantes
#define LIMITE_5138 5238
#define FACTOR_5138 4

int aplicar_limite5138(int valor) {
    if (valor > LIMITE_5138) return LIMITE_5138;
    return valor * FACTOR_5138;
}
