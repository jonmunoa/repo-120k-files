// fichero 6558 -- macros y constantes -- MODIFICADO
#define LIMITE_6558 6758
#define FACTOR_6558 5

int aplicar_limite6558(int valor) {
    if (valor > LIMITE_6558) return LIMITE_6558;
    return valor * FACTOR_6558;
}
