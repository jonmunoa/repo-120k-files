// fichero 7566 -- macros y constantes
#define LIMITE_7566 7666
#define FACTOR_7566 2

int aplicar_limite7566(int valor) {
    if (valor > LIMITE_7566) return LIMITE_7566;
    return valor * FACTOR_7566;
}
