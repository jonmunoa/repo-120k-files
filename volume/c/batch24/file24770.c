// fichero 24770 -- macros y constantes
#define LIMITE_24770 24870
#define FACTOR_24770 1

int aplicar_limite24770(int valor) {
    if (valor > LIMITE_24770) return LIMITE_24770;
    return valor * FACTOR_24770;
}
