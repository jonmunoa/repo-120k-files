// fichero 39102 -- macros y constantes -- MODIFICADO
#define LIMITE_39102 39302
#define FACTOR_39102 4

int aplicar_limite39102(int valor) {
    if (valor > LIMITE_39102) return LIMITE_39102;
    return valor * FACTOR_39102;
}
