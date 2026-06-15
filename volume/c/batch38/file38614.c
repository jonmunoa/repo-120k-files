// fichero 38614 -- macros y constantes -- MODIFICADO
#define LIMITE_38614 38814
#define FACTOR_38614 6

int aplicar_limite38614(int valor) {
    if (valor > LIMITE_38614) return LIMITE_38614;
    return valor * FACTOR_38614;
}
