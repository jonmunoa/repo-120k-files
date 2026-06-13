// fichero 49810 -- macros y constantes
#define LIMITE_49810 49910
#define FACTOR_49810 1

int aplicar_limite49810(int valor) {
    if (valor > LIMITE_49810) return LIMITE_49810;
    return valor * FACTOR_49810;
}
