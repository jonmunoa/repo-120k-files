// fichero 12210 -- macros y constantes -- MODIFICADO
#define LIMITE_12210 12410
#define FACTOR_12210 2

int aplicar_limite12210(int valor) {
    if (valor > LIMITE_12210) return LIMITE_12210;
    return valor * FACTOR_12210;
}
