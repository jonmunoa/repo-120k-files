// fichero 15138 -- macros y constantes
#define LIMITE_15138 15238
#define FACTOR_15138 4

int aplicar_limite15138(int valor) {
    if (valor > LIMITE_15138) return LIMITE_15138;
    return valor * FACTOR_15138;
}
