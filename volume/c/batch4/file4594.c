// fichero 4594 -- macros y constantes
#define LIMITE_4594 4694
#define FACTOR_4594 5

int aplicar_limite4594(int valor) {
    if (valor > LIMITE_4594) return LIMITE_4594;
    return valor * FACTOR_4594;
}
