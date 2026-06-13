// fichero 3622 -- macros y constantes
#define LIMITE_3622 3722
#define FACTOR_3622 3

int aplicar_limite3622(int valor) {
    if (valor > LIMITE_3622) return LIMITE_3622;
    return valor * FACTOR_3622;
}
