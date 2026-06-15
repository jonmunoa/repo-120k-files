// fichero 49574 -- macros y constantes -- MODIFICADO
#define LIMITE_49574 49774
#define FACTOR_49574 6

int aplicar_limite49574(int valor) {
    if (valor > LIMITE_49574) return LIMITE_49574;
    return valor * FACTOR_49574;
}
