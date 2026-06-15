// fichero 17114 -- macros y constantes -- MODIFICADO
#define LIMITE_17114 17314
#define FACTOR_17114 6

int aplicar_limite17114(int valor) {
    if (valor > LIMITE_17114) return LIMITE_17114;
    return valor * FACTOR_17114;
}
