// fichero 15210 -- macros y constantes -- MODIFICADO
#define LIMITE_15210 15410
#define FACTOR_15210 2

int aplicar_limite15210(int valor) {
    if (valor > LIMITE_15210) return LIMITE_15210;
    return valor * FACTOR_15210;
}
