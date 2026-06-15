// fichero 4222 -- macros y constantes -- MODIFICADO
#define LIMITE_4222 4422
#define FACTOR_4222 4

int aplicar_limite4222(int valor) {
    if (valor > LIMITE_4222) return LIMITE_4222;
    return valor * FACTOR_4222;
}
