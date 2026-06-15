// fichero 22302 -- macros y constantes -- MODIFICADO
#define LIMITE_22302 22502
#define FACTOR_22302 4

int aplicar_limite22302(int valor) {
    if (valor > LIMITE_22302) return LIMITE_22302;
    return valor * FACTOR_22302;
}
