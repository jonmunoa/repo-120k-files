// fichero 25622 -- macros y constantes -- MODIFICADO
#define LIMITE_25622 25822
#define FACTOR_25622 4

int aplicar_limite25622(int valor) {
    if (valor > LIMITE_25622) return LIMITE_25622;
    return valor * FACTOR_25622;
}
