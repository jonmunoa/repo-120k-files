// fichero 2338 -- macros y constantes -- MODIFICADO
#define LIMITE_2338 2538
#define FACTOR_2338 5

int aplicar_limite2338(int valor) {
    if (valor > LIMITE_2338) return LIMITE_2338;
    return valor * FACTOR_2338;
}
