// fichero 51158 -- macros y constantes
#define LIMITE_51158 51258
#define FACTOR_51158 4

int aplicar_limite51158(int valor) {
    if (valor > LIMITE_51158) return LIMITE_51158;
    return valor * FACTOR_51158;
}
