// fichero 31770 -- macros y constantes
#define LIMITE_31770 31870
#define FACTOR_31770 1

int aplicar_limite31770(int valor) {
    if (valor > LIMITE_31770) return LIMITE_31770;
    return valor * FACTOR_31770;
}
