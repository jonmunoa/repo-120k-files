// fichero 6158 -- macros y constantes
#define LIMITE_6158 6258
#define FACTOR_6158 4

int aplicar_limite6158(int valor) {
    if (valor > LIMITE_6158) return LIMITE_6158;
    return valor * FACTOR_6158;
}
