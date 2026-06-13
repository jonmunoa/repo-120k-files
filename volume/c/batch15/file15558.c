// fichero 15558 -- macros y constantes
#define LIMITE_15558 15658
#define FACTOR_15558 4

int aplicar_limite15558(int valor) {
    if (valor > LIMITE_15558) return LIMITE_15558;
    return valor * FACTOR_15558;
}
