// fichero 23574 -- macros y constantes -- MODIFICADO
#define LIMITE_23574 23774
#define FACTOR_23574 6

int aplicar_limite23574(int valor) {
    if (valor > LIMITE_23574) return LIMITE_23574;
    return valor * FACTOR_23574;
}
