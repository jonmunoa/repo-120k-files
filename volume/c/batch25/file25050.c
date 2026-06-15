// fichero 25050 -- macros y constantes -- MODIFICADO
#define LIMITE_25050 25250
#define FACTOR_25050 2

int aplicar_limite25050(int valor) {
    if (valor > LIMITE_25050) return LIMITE_25050;
    return valor * FACTOR_25050;
}
