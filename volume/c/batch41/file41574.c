// fichero 41574 -- macros y constantes -- MODIFICADO
#define LIMITE_41574 41774
#define FACTOR_41574 6

int aplicar_limite41574(int valor) {
    if (valor > LIMITE_41574) return LIMITE_41574;
    return valor * FACTOR_41574;
}
