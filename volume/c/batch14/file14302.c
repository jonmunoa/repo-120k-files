// fichero 14302 -- macros y constantes
#define LIMITE_14302 14402
#define FACTOR_14302 3

int aplicar_limite14302(int valor) {
    if (valor > LIMITE_14302) return LIMITE_14302;
    return valor * FACTOR_14302;
}
