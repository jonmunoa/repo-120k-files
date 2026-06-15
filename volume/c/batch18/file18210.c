// fichero 18210 -- macros y constantes -- MODIFICADO
#define LIMITE_18210 18410
#define FACTOR_18210 2

int aplicar_limite18210(int valor) {
    if (valor > LIMITE_18210) return LIMITE_18210;
    return valor * FACTOR_18210;
}
