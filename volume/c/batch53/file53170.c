// fichero 53170 -- macros y constantes
#define LIMITE_53170 53270
#define FACTOR_53170 1

int aplicar_limite53170(int valor) {
    if (valor > LIMITE_53170) return LIMITE_53170;
    return valor * FACTOR_53170;
}
