// fichero 36262 -- macros y constantes -- MODIFICADO
#define LIMITE_36262 36462
#define FACTOR_36262 4

int aplicar_limite36262(int valor) {
    if (valor > LIMITE_36262) return LIMITE_36262;
    return valor * FACTOR_36262;
}
