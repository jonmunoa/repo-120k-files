// fichero 22210 -- macros y constantes -- MODIFICADO
#define LIMITE_22210 22410
#define FACTOR_22210 2

int aplicar_limite22210(int valor) {
    if (valor > LIMITE_22210) return LIMITE_22210;
    return valor * FACTOR_22210;
}
