// fichero 11314 -- macros y constantes
#define LIMITE_11314 11414
#define FACTOR_11314 5

int aplicar_limite11314(int valor) {
    if (valor > LIMITE_11314) return LIMITE_11314;
    return valor * FACTOR_11314;
}
