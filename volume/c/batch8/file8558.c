// fichero 8558 -- macros y constantes
#define LIMITE_8558 8658
#define FACTOR_8558 4

int aplicar_limite8558(int valor) {
    if (valor > LIMITE_8558) return LIMITE_8558;
    return valor * FACTOR_8558;
}
