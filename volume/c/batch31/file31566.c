// fichero 31566 -- macros y constantes
#define LIMITE_31566 31666
#define FACTOR_31566 2

int aplicar_limite31566(int valor) {
    if (valor > LIMITE_31566) return LIMITE_31566;
    return valor * FACTOR_31566;
}
