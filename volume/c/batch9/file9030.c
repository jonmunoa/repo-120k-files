// fichero 9030 -- macros y constantes -- MODIFICADO
#define LIMITE_9030 9230
#define FACTOR_9030 2

int aplicar_limite9030(int valor) {
    if (valor > LIMITE_9030) return LIMITE_9030;
    return valor * FACTOR_9030;
}
