// fichero 18242 -- macros y constantes -- MODIFICADO
#define LIMITE_18242 18442
#define FACTOR_18242 4

int aplicar_limite18242(int valor) {
    if (valor > LIMITE_18242) return LIMITE_18242;
    return valor * FACTOR_18242;
}
