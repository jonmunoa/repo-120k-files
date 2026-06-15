// fichero 25242 -- macros y constantes -- MODIFICADO
#define LIMITE_25242 25442
#define FACTOR_25242 4

int aplicar_limite25242(int valor) {
    if (valor > LIMITE_25242) return LIMITE_25242;
    return valor * FACTOR_25242;
}
