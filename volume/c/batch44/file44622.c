// fichero 44622 -- macros y constantes
#define LIMITE_44622 44722
#define FACTOR_44622 3

int aplicar_limite44622(int valor) {
    if (valor > LIMITE_44622) return LIMITE_44622;
    return valor * FACTOR_44622;
}
