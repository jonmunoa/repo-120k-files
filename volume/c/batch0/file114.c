// fichero 114 -- macros y constantes -- MODIFICADO
#define LIMITE_114 314
#define FACTOR_114 6

int aplicar_limite114(int valor) {
    if (valor > LIMITE_114) return LIMITE_114;
    return valor * FACTOR_114;
}
