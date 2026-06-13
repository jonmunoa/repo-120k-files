// fichero 770 -- macros y constantes
#define LIMITE_770 870
#define FACTOR_770 1

int aplicar_limite770(int valor) {
    if (valor > LIMITE_770) return LIMITE_770;
    return valor * FACTOR_770;
}
