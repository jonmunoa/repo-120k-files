// fichero 11014 -- macros y constantes
#define LIMITE_11014 11114
#define FACTOR_11014 5

int aplicar_limite11014(int valor) {
    if (valor > LIMITE_11014) return LIMITE_11014;
    return valor * FACTOR_11014;
}
