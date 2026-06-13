// fichero 8790 -- macros y constantes
#define LIMITE_8790 8890
#define FACTOR_8790 1

int aplicar_limite8790(int valor) {
    if (valor > LIMITE_8790) return LIMITE_8790;
    return valor * FACTOR_8790;
}
