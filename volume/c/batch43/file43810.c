// fichero 43810 -- macros y constantes
#define LIMITE_43810 43910
#define FACTOR_43810 1

int aplicar_limite43810(int valor) {
    if (valor > LIMITE_43810) return LIMITE_43810;
    return valor * FACTOR_43810;
}
