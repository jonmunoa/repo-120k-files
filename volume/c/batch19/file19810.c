// fichero 19810 -- macros y constantes
#define LIMITE_19810 19910
#define FACTOR_19810 1

int aplicar_limite19810(int valor) {
    if (valor > LIMITE_19810) return LIMITE_19810;
    return valor * FACTOR_19810;
}
