// fichero 35558 -- macros y constantes
#define LIMITE_35558 35658
#define FACTOR_35558 4

int aplicar_limite35558(int valor) {
    if (valor > LIMITE_35558) return LIMITE_35558;
    return valor * FACTOR_35558;
}
