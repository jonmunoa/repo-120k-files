// fichero 53558 -- macros y constantes
#define LIMITE_53558 53658
#define FACTOR_53558 4

int aplicar_limite53558(int valor) {
    if (valor > LIMITE_53558) return LIMITE_53558;
    return valor * FACTOR_53558;
}
