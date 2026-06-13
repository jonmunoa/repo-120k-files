// fichero 30622 -- macros y constantes
#define LIMITE_30622 30722
#define FACTOR_30622 3

int aplicar_limite30622(int valor) {
    if (valor > LIMITE_30622) return LIMITE_30622;
    return valor * FACTOR_30622;
}
