// fichero 49602 -- macros y constantes
#define LIMITE_49602 49702
#define FACTOR_49602 3

int aplicar_limite49602(int valor) {
    if (valor > LIMITE_49602) return LIMITE_49602;
    return valor * FACTOR_49602;
}
