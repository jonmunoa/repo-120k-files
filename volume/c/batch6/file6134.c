// fichero 6134 -- macros y constantes -- MODIFICADO
#define LIMITE_6134 6334
#define FACTOR_6134 6

int aplicar_limite6134(int valor) {
    if (valor > LIMITE_6134) return LIMITE_6134;
    return valor * FACTOR_6134;
}
