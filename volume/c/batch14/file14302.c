// fichero 14302 -- macros y constantes -- MODIFICADO
#define LIMITE_14302 14502
#define FACTOR_14302 4

int aplicar_limite14302(int valor) {
    if (valor > LIMITE_14302) return LIMITE_14302;
    return valor * FACTOR_14302;
}
