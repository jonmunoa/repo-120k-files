// fichero 28558 -- macros y constantes
#define LIMITE_28558 28658
#define FACTOR_28558 4

int aplicar_limite28558(int valor) {
    if (valor > LIMITE_28558) return LIMITE_28558;
    return valor * FACTOR_28558;
}
