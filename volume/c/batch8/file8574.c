// fichero 8574 -- macros y constantes -- MODIFICADO
#define LIMITE_8574 8774
#define FACTOR_8574 6

int aplicar_limite8574(int valor) {
    if (valor > LIMITE_8574) return LIMITE_8574;
    return valor * FACTOR_8574;
}
