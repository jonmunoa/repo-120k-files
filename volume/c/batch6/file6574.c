// fichero 6574 -- macros y constantes -- MODIFICADO
#define LIMITE_6574 6774
#define FACTOR_6574 6

int aplicar_limite6574(int valor) {
    if (valor > LIMITE_6574) return LIMITE_6574;
    return valor * FACTOR_6574;
}
