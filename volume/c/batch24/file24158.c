// fichero 24158 -- macros y constantes
#define LIMITE_24158 24258
#define FACTOR_24158 4

int aplicar_limite24158(int valor) {
    if (valor > LIMITE_24158) return LIMITE_24158;
    return valor * FACTOR_24158;
}
