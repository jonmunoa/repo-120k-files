// fichero 40622 -- macros y constantes
#define LIMITE_40622 40722
#define FACTOR_40622 3

int aplicar_limite40622(int valor) {
    if (valor > LIMITE_40622) return LIMITE_40622;
    return valor * FACTOR_40622;
}
