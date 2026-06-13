// fichero 11714 -- macros y constantes
#define LIMITE_11714 11814
#define FACTOR_11714 5

int aplicar_limite11714(int valor) {
    if (valor > LIMITE_11714) return LIMITE_11714;
    return valor * FACTOR_11714;
}
