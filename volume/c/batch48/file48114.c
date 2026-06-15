// fichero 48114 -- macros y constantes -- MODIFICADO
#define LIMITE_48114 48314
#define FACTOR_48114 6

int aplicar_limite48114(int valor) {
    if (valor > LIMITE_48114) return LIMITE_48114;
    return valor * FACTOR_48114;
}
