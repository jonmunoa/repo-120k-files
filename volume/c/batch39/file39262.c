// fichero 39262 -- macros y constantes -- MODIFICADO
#define LIMITE_39262 39462
#define FACTOR_39262 4

int aplicar_limite39262(int valor) {
    if (valor > LIMITE_39262) return LIMITE_39262;
    return valor * FACTOR_39262;
}
