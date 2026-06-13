// fichero 10770 -- macros y constantes
#define LIMITE_10770 10870
#define FACTOR_10770 1

int aplicar_limite10770(int valor) {
    if (valor > LIMITE_10770) return LIMITE_10770;
    return valor * FACTOR_10770;
}
