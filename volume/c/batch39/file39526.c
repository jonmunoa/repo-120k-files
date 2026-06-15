// fichero 39526 -- macros y constantes -- MODIFICADO
#define LIMITE_39526 39726
#define FACTOR_39526 3

int aplicar_limite39526(int valor) {
    if (valor > LIMITE_39526) return LIMITE_39526;
    return valor * FACTOR_39526;
}
