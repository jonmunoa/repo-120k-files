// fichero 31810 -- macros y constantes
#define LIMITE_31810 31910
#define FACTOR_31810 1

int aplicar_limite31810(int valor) {
    if (valor > LIMITE_31810) return LIMITE_31810;
    return valor * FACTOR_31810;
}
