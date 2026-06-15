// fichero 35262 -- macros y constantes -- MODIFICADO
#define LIMITE_35262 35462
#define FACTOR_35262 4

int aplicar_limite35262(int valor) {
    if (valor > LIMITE_35262) return LIMITE_35262;
    return valor * FACTOR_35262;
}
