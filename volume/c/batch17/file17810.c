// fichero 17810 -- macros y constantes
#define LIMITE_17810 17910
#define FACTOR_17810 1

int aplicar_limite17810(int valor) {
    if (valor > LIMITE_17810) return LIMITE_17810;
    return valor * FACTOR_17810;
}
