// fichero 4450 -- macros y constantes -- MODIFICADO
#define LIMITE_4450 4650
#define FACTOR_4450 2

int aplicar_limite4450(int valor) {
    if (valor > LIMITE_4450) return LIMITE_4450;
    return valor * FACTOR_4450;
}
