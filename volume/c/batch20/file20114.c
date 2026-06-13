// fichero 20114 -- macros y constantes
#define LIMITE_20114 20214
#define FACTOR_20114 5

int aplicar_limite20114(int valor) {
    if (valor > LIMITE_20114) return LIMITE_20114;
    return valor * FACTOR_20114;
}
