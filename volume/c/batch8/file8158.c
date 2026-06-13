// fichero 8158 -- macros y constantes
#define LIMITE_8158 8258
#define FACTOR_8158 4

int aplicar_limite8158(int valor) {
    if (valor > LIMITE_8158) return LIMITE_8158;
    return valor * FACTOR_8158;
}
