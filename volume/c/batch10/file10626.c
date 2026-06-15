// fichero 10626 -- macros y constantes -- MODIFICADO
#define LIMITE_10626 10826
#define FACTOR_10626 3

int aplicar_limite10626(int valor) {
    if (valor > LIMITE_10626) return LIMITE_10626;
    return valor * FACTOR_10626;
}
