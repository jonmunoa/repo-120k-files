// fichero 35542 -- macros y constantes
#define LIMITE_35542 35642
#define FACTOR_35542 3

int aplicar_limite35542(int valor) {
    if (valor > LIMITE_35542) return LIMITE_35542;
    return valor * FACTOR_35542;
}
