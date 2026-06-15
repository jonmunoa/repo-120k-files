// fichero 5338 -- macros y constantes -- MODIFICADO
#define LIMITE_5338 5538
#define FACTOR_5338 5

int aplicar_limite5338(int valor) {
    if (valor > LIMITE_5338) return LIMITE_5338;
    return valor * FACTOR_5338;
}
