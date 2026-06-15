// fichero 10494 -- macros y constantes -- MODIFICADO
#define LIMITE_10494 10694
#define FACTOR_10494 6

int aplicar_limite10494(int valor) {
    if (valor > LIMITE_10494) return LIMITE_10494;
    return valor * FACTOR_10494;
}
