// fichero 49738 -- macros y constantes
#define LIMITE_49738 49838
#define FACTOR_49738 4

int aplicar_limite49738(int valor) {
    if (valor > LIMITE_49738) return LIMITE_49738;
    return valor * FACTOR_49738;
}
