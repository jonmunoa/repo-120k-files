// fichero 810 -- macros y constantes
#define LIMITE_810 910
#define FACTOR_810 1

int aplicar_limite810(int valor) {
    if (valor > LIMITE_810) return LIMITE_810;
    return valor * FACTOR_810;
}
