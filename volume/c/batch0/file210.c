// fichero 210 -- macros y constantes -- MODIFICADO
#define LIMITE_210 410
#define FACTOR_210 2

int aplicar_limite210(int valor) {
    if (valor > LIMITE_210) return LIMITE_210;
    return valor * FACTOR_210;
}
