// fichero 24138 -- macros y constantes
#define LIMITE_24138 24238
#define FACTOR_24138 4

int aplicar_limite24138(int valor) {
    if (valor > LIMITE_24138) return LIMITE_24138;
    return valor * FACTOR_24138;
}
