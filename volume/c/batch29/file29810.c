// fichero 29810 -- macros y constantes
#define LIMITE_29810 29910
#define FACTOR_29810 1

int aplicar_limite29810(int valor) {
    if (valor > LIMITE_29810) return LIMITE_29810;
    return valor * FACTOR_29810;
}
