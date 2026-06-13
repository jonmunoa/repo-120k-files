// fichero 44810 -- macros y constantes
#define LIMITE_44810 44910
#define FACTOR_44810 1

int aplicar_limite44810(int valor) {
    if (valor > LIMITE_44810) return LIMITE_44810;
    return valor * FACTOR_44810;
}
