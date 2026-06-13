// fichero 35810 -- macros y constantes
#define LIMITE_35810 35910
#define FACTOR_35810 1

int aplicar_limite35810(int valor) {
    if (valor > LIMITE_35810) return LIMITE_35810;
    return valor * FACTOR_35810;
}
