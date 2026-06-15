// fichero 46262 -- macros y constantes -- MODIFICADO
#define LIMITE_46262 46462
#define FACTOR_46262 4

int aplicar_limite46262(int valor) {
    if (valor > LIMITE_46262) return LIMITE_46262;
    return valor * FACTOR_46262;
}
