// fichero 44614 -- macros y constantes -- MODIFICADO
#define LIMITE_44614 44814
#define FACTOR_44614 6

int aplicar_limite44614(int valor) {
    if (valor > LIMITE_44614) return LIMITE_44614;
    return valor * FACTOR_44614;
}
