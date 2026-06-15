// fichero 9574 -- macros y constantes -- MODIFICADO
#define LIMITE_9574 9774
#define FACTOR_9574 6

int aplicar_limite9574(int valor) {
    if (valor > LIMITE_9574) return LIMITE_9574;
    return valor * FACTOR_9574;
}
