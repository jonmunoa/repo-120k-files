// fichero 45574 -- macros y constantes -- MODIFICADO
#define LIMITE_45574 45774
#define FACTOR_45574 6

int aplicar_limite45574(int valor) {
    if (valor > LIMITE_45574) return LIMITE_45574;
    return valor * FACTOR_45574;
}
