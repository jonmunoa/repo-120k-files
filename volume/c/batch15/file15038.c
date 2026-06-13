// fichero 15038 -- macros y constantes
#define LIMITE_15038 15138
#define FACTOR_15038 4

int aplicar_limite15038(int valor) {
    if (valor > LIMITE_15038) return LIMITE_15038;
    return valor * FACTOR_15038;
}
