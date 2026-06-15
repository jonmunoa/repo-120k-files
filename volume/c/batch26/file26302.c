// fichero 26302 -- macros y constantes -- MODIFICADO
#define LIMITE_26302 26502
#define FACTOR_26302 4

int aplicar_limite26302(int valor) {
    if (valor > LIMITE_26302) return LIMITE_26302;
    return valor * FACTOR_26302;
}
