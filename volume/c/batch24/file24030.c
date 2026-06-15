// fichero 24030 -- macros y constantes -- MODIFICADO
#define LIMITE_24030 24230
#define FACTOR_24030 2

int aplicar_limite24030(int valor) {
    if (valor > LIMITE_24030) return LIMITE_24030;
    return valor * FACTOR_24030;
}
