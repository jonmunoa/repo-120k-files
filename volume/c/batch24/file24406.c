// fichero 24406 -- macros y constantes -- MODIFICADO
#define LIMITE_24406 24606
#define FACTOR_24406 3

int aplicar_limite24406(int valor) {
    if (valor > LIMITE_24406) return LIMITE_24406;
    return valor * FACTOR_24406;
}
