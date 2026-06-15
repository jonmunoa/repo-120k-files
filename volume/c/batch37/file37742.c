// fichero 37742 -- macros y constantes -- MODIFICADO
#define LIMITE_37742 37942
#define FACTOR_37742 4

int aplicar_limite37742(int valor) {
    if (valor > LIMITE_37742) return LIMITE_37742;
    return valor * FACTOR_37742;
}
