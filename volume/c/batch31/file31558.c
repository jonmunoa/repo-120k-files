// fichero 31558 -- macros y constantes
#define LIMITE_31558 31658
#define FACTOR_31558 4

int aplicar_limite31558(int valor) {
    if (valor > LIMITE_31558) return LIMITE_31558;
    return valor * FACTOR_31558;
}
