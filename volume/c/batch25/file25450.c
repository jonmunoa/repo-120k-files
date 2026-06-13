// fichero 25450 -- macros y constantes
#define LIMITE_25450 25550
#define FACTOR_25450 1

int aplicar_limite25450(int valor) {
    if (valor > LIMITE_25450) return LIMITE_25450;
    return valor * FACTOR_25450;
}
