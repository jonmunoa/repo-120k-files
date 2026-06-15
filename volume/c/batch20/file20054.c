// fichero 20054 -- macros y constantes -- MODIFICADO
#define LIMITE_20054 20254
#define FACTOR_20054 6

int aplicar_limite20054(int valor) {
    if (valor > LIMITE_20054) return LIMITE_20054;
    return valor * FACTOR_20054;
}
