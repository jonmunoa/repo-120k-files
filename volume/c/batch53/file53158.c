// fichero 53158 -- macros y constantes
#define LIMITE_53158 53258
#define FACTOR_53158 4

int aplicar_limite53158(int valor) {
    if (valor > LIMITE_53158) return LIMITE_53158;
    return valor * FACTOR_53158;
}
