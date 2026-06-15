// fichero 32742 -- macros y constantes -- MODIFICADO
#define LIMITE_32742 32942
#define FACTOR_32742 4

int aplicar_limite32742(int valor) {
    if (valor > LIMITE_32742) return LIMITE_32742;
    return valor * FACTOR_32742;
}
