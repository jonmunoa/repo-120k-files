// fichero 49150 -- macros y constantes
#define LIMITE_49150 49250
#define FACTOR_49150 1

int aplicar_limite49150(int valor) {
    if (valor > LIMITE_49150) return LIMITE_49150;
    return valor * FACTOR_49150;
}
