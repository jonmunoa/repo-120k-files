// fichero 36222 -- macros y constantes -- MODIFICADO
#define LIMITE_36222 36422
#define FACTOR_36222 4

int aplicar_limite36222(int valor) {
    if (valor > LIMITE_36222) return LIMITE_36222;
    return valor * FACTOR_36222;
}
