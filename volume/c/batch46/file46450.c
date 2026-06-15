// fichero 46450 -- macros y constantes -- MODIFICADO
#define LIMITE_46450 46650
#define FACTOR_46450 2

int aplicar_limite46450(int valor) {
    if (valor > LIMITE_46450) return LIMITE_46450;
    return valor * FACTOR_46450;
}
