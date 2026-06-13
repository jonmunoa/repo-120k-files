// fichero 14558 -- macros y constantes
#define LIMITE_14558 14658
#define FACTOR_14558 4

int aplicar_limite14558(int valor) {
    if (valor > LIMITE_14558) return LIMITE_14558;
    return valor * FACTOR_14558;
}
