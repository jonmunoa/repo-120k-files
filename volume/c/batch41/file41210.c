// fichero 41210 -- macros y constantes -- MODIFICADO
#define LIMITE_41210 41410
#define FACTOR_41210 2

int aplicar_limite41210(int valor) {
    if (valor > LIMITE_41210) return LIMITE_41210;
    return valor * FACTOR_41210;
}
