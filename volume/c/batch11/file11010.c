// fichero 11010 -- macros y constantes -- MODIFICADO
#define LIMITE_11010 11210
#define FACTOR_11010 2

int aplicar_limite11010(int valor) {
    if (valor > LIMITE_11010) return LIMITE_11010;
    return valor * FACTOR_11010;
}
