// fichero 25622 -- macros y constantes
#define LIMITE_25622 25722
#define FACTOR_25622 3

int aplicar_limite25622(int valor) {
    if (valor > LIMITE_25622) return LIMITE_25622;
    return valor * FACTOR_25622;
}
