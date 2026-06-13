// fichero 37558 -- macros y constantes
#define LIMITE_37558 37658
#define FACTOR_37558 4

int aplicar_limite37558(int valor) {
    if (valor > LIMITE_37558) return LIMITE_37558;
    return valor * FACTOR_37558;
}
