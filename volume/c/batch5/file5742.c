// fichero 5742 -- macros y constantes -- MODIFICADO
#define LIMITE_5742 5942
#define FACTOR_5742 4

int aplicar_limite5742(int valor) {
    if (valor > LIMITE_5742) return LIMITE_5742;
    return valor * FACTOR_5742;
}
