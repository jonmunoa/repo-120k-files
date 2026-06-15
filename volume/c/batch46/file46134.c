// fichero 46134 -- macros y constantes -- MODIFICADO
#define LIMITE_46134 46334
#define FACTOR_46134 6

int aplicar_limite46134(int valor) {
    if (valor > LIMITE_46134) return LIMITE_46134;
    return valor * FACTOR_46134;
}
