// fichero 16210 -- macros y constantes -- MODIFICADO
#define LIMITE_16210 16410
#define FACTOR_16210 2

int aplicar_limite16210(int valor) {
    if (valor > LIMITE_16210) return LIMITE_16210;
    return valor * FACTOR_16210;
}
