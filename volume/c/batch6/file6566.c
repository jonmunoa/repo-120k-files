// fichero 6566 -- macros y constantes
#define LIMITE_6566 6666
#define FACTOR_6566 2

int aplicar_limite6566(int valor) {
    if (valor > LIMITE_6566) return LIMITE_6566;
    return valor * FACTOR_6566;
}
