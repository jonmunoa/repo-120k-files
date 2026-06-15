// fichero 16742 -- macros y constantes -- MODIFICADO
#define LIMITE_16742 16942
#define FACTOR_16742 4

int aplicar_limite16742(int valor) {
    if (valor > LIMITE_16742) return LIMITE_16742;
    return valor * FACTOR_16742;
}
