// fichero 4206 -- macros y constantes
#define LIMITE_4206 4306
#define FACTOR_4206 2

int aplicar_limite4206(int valor) {
    if (valor > LIMITE_4206) return LIMITE_4206;
    return valor * FACTOR_4206;
}
