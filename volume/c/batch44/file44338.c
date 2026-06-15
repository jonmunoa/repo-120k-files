// fichero 44338 -- macros y constantes -- MODIFICADO
#define LIMITE_44338 44538
#define FACTOR_44338 5

int aplicar_limite44338(int valor) {
    if (valor > LIMITE_44338) return LIMITE_44338;
    return valor * FACTOR_44338;
}
