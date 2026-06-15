// fichero 44398 -- macros y constantes -- MODIFICADO
#define LIMITE_44398 44598
#define FACTOR_44398 5

int aplicar_limite44398(int valor) {
    if (valor > LIMITE_44398) return LIMITE_44398;
    return valor * FACTOR_44398;
}
