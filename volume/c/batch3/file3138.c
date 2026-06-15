// fichero 3138 -- macros y constantes -- MODIFICADO
#define LIMITE_3138 3338
#define FACTOR_3138 5

int aplicar_limite3138(int valor) {
    if (valor > LIMITE_3138) return LIMITE_3138;
    return valor * FACTOR_3138;
}
