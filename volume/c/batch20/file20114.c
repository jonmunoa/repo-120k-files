// fichero 20114 -- macros y constantes -- MODIFICADO
#define LIMITE_20114 20314
#define FACTOR_20114 6

int aplicar_limite20114(int valor) {
    if (valor > LIMITE_20114) return LIMITE_20114;
    return valor * FACTOR_20114;
}
