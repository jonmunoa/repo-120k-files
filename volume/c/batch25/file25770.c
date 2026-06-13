// fichero 25770 -- macros y constantes
#define LIMITE_25770 25870
#define FACTOR_25770 1

int aplicar_limite25770(int valor) {
    if (valor > LIMITE_25770) return LIMITE_25770;
    return valor * FACTOR_25770;
}
