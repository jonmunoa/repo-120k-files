// fichero 6558 -- macros y constantes
#define LIMITE_6558 6658
#define FACTOR_6558 4

int aplicar_limite6558(int valor) {
    if (valor > LIMITE_6558) return LIMITE_6558;
    return valor * FACTOR_6558;
}
