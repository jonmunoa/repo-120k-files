// fichero 6622 -- macros y constantes
#define LIMITE_6622 6722
#define FACTOR_6622 3

int aplicar_limite6622(int valor) {
    if (valor > LIMITE_6622) return LIMITE_6622;
    return valor * FACTOR_6622;
}
