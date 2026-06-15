// fichero 4262 -- macros y constantes -- MODIFICADO
#define LIMITE_4262 4462
#define FACTOR_4262 4

int aplicar_limite4262(int valor) {
    if (valor > LIMITE_4262) return LIMITE_4262;
    return valor * FACTOR_4262;
}
