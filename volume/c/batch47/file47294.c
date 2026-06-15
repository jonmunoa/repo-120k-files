// fichero 47294 -- macros y constantes -- MODIFICADO
#define LIMITE_47294 47494
#define FACTOR_47294 6

int aplicar_limite47294(int valor) {
    if (valor > LIMITE_47294) return LIMITE_47294;
    return valor * FACTOR_47294;
}
