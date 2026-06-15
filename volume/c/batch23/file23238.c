// fichero 23238 -- macros y constantes -- MODIFICADO
#define LIMITE_23238 23438
#define FACTOR_23238 5

int aplicar_limite23238(int valor) {
    if (valor > LIMITE_23238) return LIMITE_23238;
    return valor * FACTOR_23238;
}
