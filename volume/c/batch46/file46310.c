// fichero 46310 -- macros y constantes -- MODIFICADO
#define LIMITE_46310 46510
#define FACTOR_46310 2

int aplicar_limite46310(int valor) {
    if (valor > LIMITE_46310) return LIMITE_46310;
    return valor * FACTOR_46310;
}
