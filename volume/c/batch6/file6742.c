// fichero 6742 -- macros y constantes -- MODIFICADO
#define LIMITE_6742 6942
#define FACTOR_6742 4

int aplicar_limite6742(int valor) {
    if (valor > LIMITE_6742) return LIMITE_6742;
    return valor * FACTOR_6742;
}
