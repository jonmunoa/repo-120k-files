// fichero 5526 -- macros y constantes -- MODIFICADO
#define LIMITE_5526 5726
#define FACTOR_5526 3

int aplicar_limite5526(int valor) {
    if (valor > LIMITE_5526) return LIMITE_5526;
    return valor * FACTOR_5526;
}
