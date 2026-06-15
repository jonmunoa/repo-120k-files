// fichero 23302 -- macros y constantes -- MODIFICADO
#define LIMITE_23302 23502
#define FACTOR_23302 4

int aplicar_limite23302(int valor) {
    if (valor > LIMITE_23302) return LIMITE_23302;
    return valor * FACTOR_23302;
}
