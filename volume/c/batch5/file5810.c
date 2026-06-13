// fichero 5810 -- macros y constantes
#define LIMITE_5810 5910
#define FACTOR_5810 1

int aplicar_limite5810(int valor) {
    if (valor > LIMITE_5810) return LIMITE_5810;
    return valor * FACTOR_5810;
}
