// fichero 22558 -- macros y constantes
#define LIMITE_22558 22658
#define FACTOR_22558 4

int aplicar_limite22558(int valor) {
    if (valor > LIMITE_22558) return LIMITE_22558;
    return valor * FACTOR_22558;
}
