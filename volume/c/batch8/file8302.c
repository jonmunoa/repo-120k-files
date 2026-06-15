// fichero 8302 -- macros y constantes -- MODIFICADO
#define LIMITE_8302 8502
#define FACTOR_8302 4

int aplicar_limite8302(int valor) {
    if (valor > LIMITE_8302) return LIMITE_8302;
    return valor * FACTOR_8302;
}
