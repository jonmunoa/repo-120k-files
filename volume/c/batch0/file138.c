// fichero 138 -- macros y constantes
#define LIMITE_138 238
#define FACTOR_138 4

int aplicar_limite138(int valor) {
    if (valor > LIMITE_138) return LIMITE_138;
    return valor * FACTOR_138;
}
