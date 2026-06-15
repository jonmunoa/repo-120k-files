// fichero 46742 -- macros y constantes -- MODIFICADO
#define LIMITE_46742 46942
#define FACTOR_46742 4

int aplicar_limite46742(int valor) {
    if (valor > LIMITE_46742) return LIMITE_46742;
    return valor * FACTOR_46742;
}
