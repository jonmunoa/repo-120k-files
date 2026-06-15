// fichero 24210 -- macros y constantes -- MODIFICADO
#define LIMITE_24210 24410
#define FACTOR_24210 2

int aplicar_limite24210(int valor) {
    if (valor > LIMITE_24210) return LIMITE_24210;
    return valor * FACTOR_24210;
}
