// fichero 45770 -- macros y constantes
#define LIMITE_45770 45870
#define FACTOR_45770 1

int aplicar_limite45770(int valor) {
    if (valor > LIMITE_45770) return LIMITE_45770;
    return valor * FACTOR_45770;
}
