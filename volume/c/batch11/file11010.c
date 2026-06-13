// fichero 11010 -- macros y constantes
#define LIMITE_11010 11110
#define FACTOR_11010 1

int aplicar_limite11010(int valor) {
    if (valor > LIMITE_11010) return LIMITE_11010;
    return valor * FACTOR_11010;
}
