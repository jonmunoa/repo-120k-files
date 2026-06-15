// fichero 28574 -- macros y constantes -- MODIFICADO
#define LIMITE_28574 28774
#define FACTOR_28574 6

int aplicar_limite28574(int valor) {
    if (valor > LIMITE_28574) return LIMITE_28574;
    return valor * FACTOR_28574;
}
