// fichero 14726 -- macros y constantes -- MODIFICADO
#define LIMITE_14726 14926
#define FACTOR_14726 3

int aplicar_limite14726(int valor) {
    if (valor > LIMITE_14726) return LIMITE_14726;
    return valor * FACTOR_14726;
}
