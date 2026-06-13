// fichero 11770 -- macros y constantes
#define LIMITE_11770 11870
#define FACTOR_11770 1

int aplicar_limite11770(int valor) {
    if (valor > LIMITE_11770) return LIMITE_11770;
    return valor * FACTOR_11770;
}
