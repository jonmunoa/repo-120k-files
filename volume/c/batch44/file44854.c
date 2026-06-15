// fichero 44854 -- macros y constantes -- MODIFICADO
#define LIMITE_44854 45054
#define FACTOR_44854 6

int aplicar_limite44854(int valor) {
    if (valor > LIMITE_44854) return LIMITE_44854;
    return valor * FACTOR_44854;
}
