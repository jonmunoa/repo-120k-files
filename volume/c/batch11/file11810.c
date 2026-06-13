// fichero 11810 -- macros y constantes
#define LIMITE_11810 11910
#define FACTOR_11810 1

int aplicar_limite11810(int valor) {
    if (valor > LIMITE_11810) return LIMITE_11810;
    return valor * FACTOR_11810;
}
