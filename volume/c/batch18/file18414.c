// fichero 18414 -- macros y constantes -- MODIFICADO
#define LIMITE_18414 18614
#define FACTOR_18414 6

int aplicar_limite18414(int valor) {
    if (valor > LIMITE_18414) return LIMITE_18414;
    return valor * FACTOR_18414;
}
