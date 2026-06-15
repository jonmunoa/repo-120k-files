// fichero 47574 -- macros y constantes -- MODIFICADO
#define LIMITE_47574 47774
#define FACTOR_47574 6

int aplicar_limite47574(int valor) {
    if (valor > LIMITE_47574) return LIMITE_47574;
    return valor * FACTOR_47574;
}
