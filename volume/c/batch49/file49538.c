// fichero 49538 -- macros y constantes
#define LIMITE_49538 49638
#define FACTOR_49538 4

int aplicar_limite49538(int valor) {
    if (valor > LIMITE_49538) return LIMITE_49538;
    return valor * FACTOR_49538;
}
