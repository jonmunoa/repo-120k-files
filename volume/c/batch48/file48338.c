// fichero 48338 -- macros y constantes -- MODIFICADO
#define LIMITE_48338 48538
#define FACTOR_48338 5

int aplicar_limite48338(int valor) {
    if (valor > LIMITE_48338) return LIMITE_48338;
    return valor * FACTOR_48338;
}
