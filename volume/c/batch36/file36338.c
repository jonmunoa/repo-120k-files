// fichero 36338 -- macros y constantes -- MODIFICADO
#define LIMITE_36338 36538
#define FACTOR_36338 5

int aplicar_limite36338(int valor) {
    if (valor > LIMITE_36338) return LIMITE_36338;
    return valor * FACTOR_36338;
}
