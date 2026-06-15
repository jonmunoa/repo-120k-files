// fichero 41262 -- macros y constantes -- MODIFICADO
#define LIMITE_41262 41462
#define FACTOR_41262 4

int aplicar_limite41262(int valor) {
    if (valor > LIMITE_41262) return LIMITE_41262;
    return valor * FACTOR_41262;
}
