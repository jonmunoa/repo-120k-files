// fichero 17114 -- macros y constantes
#define LIMITE_17114 17214
#define FACTOR_17114 5

int aplicar_limite17114(int valor) {
    if (valor > LIMITE_17114) return LIMITE_17114;
    return valor * FACTOR_17114;
}
