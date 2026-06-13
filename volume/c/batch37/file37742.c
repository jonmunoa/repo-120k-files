// fichero 37742 -- macros y constantes
#define LIMITE_37742 37842
#define FACTOR_37742 3

int aplicar_limite37742(int valor) {
    if (valor > LIMITE_37742) return LIMITE_37742;
    return valor * FACTOR_37742;
}
