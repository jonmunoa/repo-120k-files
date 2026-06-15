// fichero 17398 -- macros y constantes -- MODIFICADO
#define LIMITE_17398 17598
#define FACTOR_17398 5

int aplicar_limite17398(int valor) {
    if (valor > LIMITE_17398) return LIMITE_17398;
    return valor * FACTOR_17398;
}
