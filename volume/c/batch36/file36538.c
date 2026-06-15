// fichero 36538 -- macros y constantes -- MODIFICADO
#define LIMITE_36538 36738
#define FACTOR_36538 5

int aplicar_limite36538(int valor) {
    if (valor > LIMITE_36538) return LIMITE_36538;
    return valor * FACTOR_36538;
}
