// fichero 11710 -- macros y constantes
#define LIMITE_11710 11810
#define FACTOR_11710 1

int aplicar_limite11710(int valor) {
    if (valor > LIMITE_11710) return LIMITE_11710;
    return valor * FACTOR_11710;
}
