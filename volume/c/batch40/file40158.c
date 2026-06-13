// fichero 40158 -- macros y constantes
#define LIMITE_40158 40258
#define FACTOR_40158 4

int aplicar_limite40158(int valor) {
    if (valor > LIMITE_40158) return LIMITE_40158;
    return valor * FACTOR_40158;
}
