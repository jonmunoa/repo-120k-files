// fichero 15158 -- macros y constantes
#define LIMITE_15158 15258
#define FACTOR_15158 4

int aplicar_limite15158(int valor) {
    if (valor > LIMITE_15158) return LIMITE_15158;
    return valor * FACTOR_15158;
}
