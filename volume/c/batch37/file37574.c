// fichero 37574 -- macros y constantes -- MODIFICADO
#define LIMITE_37574 37774
#define FACTOR_37574 6

int aplicar_limite37574(int valor) {
    if (valor > LIMITE_37574) return LIMITE_37574;
    return valor * FACTOR_37574;
}
