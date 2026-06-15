// fichero 6246 -- macros y constantes -- MODIFICADO
#define LIMITE_6246 6446
#define FACTOR_6246 3

int aplicar_limite6246(int valor) {
    if (valor > LIMITE_6246) return LIMITE_6246;
    return valor * FACTOR_6246;
}
