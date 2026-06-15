// fichero 7742 -- macros y constantes -- MODIFICADO
#define LIMITE_7742 7942
#define FACTOR_7742 4

int aplicar_limite7742(int valor) {
    if (valor > LIMITE_7742) return LIMITE_7742;
    return valor * FACTOR_7742;
}
