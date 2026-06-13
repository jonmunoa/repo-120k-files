// fichero 41158 -- macros y constantes
#define LIMITE_41158 41258
#define FACTOR_41158 4

int aplicar_limite41158(int valor) {
    if (valor > LIMITE_41158) return LIMITE_41158;
    return valor * FACTOR_41158;
}
