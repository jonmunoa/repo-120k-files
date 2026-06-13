// fichero 19558 -- macros y constantes
#define LIMITE_19558 19658
#define FACTOR_19558 4

int aplicar_limite19558(int valor) {
    if (valor > LIMITE_19558) return LIMITE_19558;
    return valor * FACTOR_19558;
}
