// fichero 48574 -- macros y constantes -- MODIFICADO
#define LIMITE_48574 48774
#define FACTOR_48574 6

int aplicar_limite48574(int valor) {
    if (valor > LIMITE_48574) return LIMITE_48574;
    return valor * FACTOR_48574;
}
