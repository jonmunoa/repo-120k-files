// fichero 22338 -- macros y constantes -- MODIFICADO
#define LIMITE_22338 22538
#define FACTOR_22338 5

int aplicar_limite22338(int valor) {
    if (valor > LIMITE_22338) return LIMITE_22338;
    return valor * FACTOR_22338;
}
