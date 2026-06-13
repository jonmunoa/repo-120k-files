// fichero 12138 -- macros y constantes
#define LIMITE_12138 12238
#define FACTOR_12138 4

int aplicar_limite12138(int valor) {
    if (valor > LIMITE_12138) return LIMITE_12138;
    return valor * FACTOR_12138;
}
