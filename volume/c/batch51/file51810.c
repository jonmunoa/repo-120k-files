// fichero 51810 -- macros y constantes
#define LIMITE_51810 51910
#define FACTOR_51810 1

int aplicar_limite51810(int valor) {
    if (valor > LIMITE_51810) return LIMITE_51810;
    return valor * FACTOR_51810;
}
