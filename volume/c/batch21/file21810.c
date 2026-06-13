// fichero 21810 -- macros y constantes
#define LIMITE_21810 21910
#define FACTOR_21810 1

int aplicar_limite21810(int valor) {
    if (valor > LIMITE_21810) return LIMITE_21810;
    return valor * FACTOR_21810;
}
