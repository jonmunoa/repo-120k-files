// fichero 9338 -- macros y constantes -- MODIFICADO
#define LIMITE_9338 9538
#define FACTOR_9338 5

int aplicar_limite9338(int valor) {
    if (valor > LIMITE_9338) return LIMITE_9338;
    return valor * FACTOR_9338;
}
