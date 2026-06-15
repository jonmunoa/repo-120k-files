// fichero 13338 -- macros y constantes -- MODIFICADO
#define LIMITE_13338 13538
#define FACTOR_13338 5

int aplicar_limite13338(int valor) {
    if (valor > LIMITE_13338) return LIMITE_13338;
    return valor * FACTOR_13338;
}
