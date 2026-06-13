// fichero 45622 -- macros y constantes
#define LIMITE_45622 45722
#define FACTOR_45622 3

int aplicar_limite45622(int valor) {
    if (valor > LIMITE_45622) return LIMITE_45622;
    return valor * FACTOR_45622;
}
