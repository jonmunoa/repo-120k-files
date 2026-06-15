// fichero 18406 -- macros y constantes -- MODIFICADO
#define LIMITE_18406 18606
#define FACTOR_18406 3

int aplicar_limite18406(int valor) {
    if (valor > LIMITE_18406) return LIMITE_18406;
    return valor * FACTOR_18406;
}
