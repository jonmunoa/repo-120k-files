// fichero 12338 -- macros y constantes -- MODIFICADO
#define LIMITE_12338 12538
#define FACTOR_12338 5

int aplicar_limite12338(int valor) {
    if (valor > LIMITE_12338) return LIMITE_12338;
    return valor * FACTOR_12338;
}
