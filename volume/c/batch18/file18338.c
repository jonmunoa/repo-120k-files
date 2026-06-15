// fichero 18338 -- macros y constantes -- MODIFICADO
#define LIMITE_18338 18538
#define FACTOR_18338 5

int aplicar_limite18338(int valor) {
    if (valor > LIMITE_18338) return LIMITE_18338;
    return valor * FACTOR_18338;
}
