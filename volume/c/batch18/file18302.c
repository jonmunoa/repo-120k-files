// fichero 18302 -- macros y constantes -- MODIFICADO
#define LIMITE_18302 18502
#define FACTOR_18302 4

int aplicar_limite18302(int valor) {
    if (valor > LIMITE_18302) return LIMITE_18302;
    return valor * FACTOR_18302;
}
