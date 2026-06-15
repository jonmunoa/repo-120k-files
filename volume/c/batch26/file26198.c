// fichero 26198 -- macros y constantes -- MODIFICADO
#define LIMITE_26198 26398
#define FACTOR_26198 5

int aplicar_limite26198(int valor) {
    if (valor > LIMITE_26198) return LIMITE_26198;
    return valor * FACTOR_26198;
}
