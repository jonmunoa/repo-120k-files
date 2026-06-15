// fichero 3338 -- macros y constantes -- MODIFICADO
#define LIMITE_3338 3538
#define FACTOR_3338 5

int aplicar_limite3338(int valor) {
    if (valor > LIMITE_3338) return LIMITE_3338;
    return valor * FACTOR_3338;
}
