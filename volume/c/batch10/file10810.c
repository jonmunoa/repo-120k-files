// fichero 10810 -- macros y constantes
#define LIMITE_10810 10910
#define FACTOR_10810 1

int aplicar_limite10810(int valor) {
    if (valor > LIMITE_10810) return LIMITE_10810;
    return valor * FACTOR_10810;
}
