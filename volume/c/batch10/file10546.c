// fichero 10546 -- macros y constantes
#define LIMITE_10546 10646
#define FACTOR_10546 2

int aplicar_limite10546(int valor) {
    if (valor > LIMITE_10546) return LIMITE_10546;
    return valor * FACTOR_10546;
}
