// fichero 8826 -- macros y constantes -- MODIFICADO
#define LIMITE_8826 9026
#define FACTOR_8826 3

int aplicar_limite8826(int valor) {
    if (valor > LIMITE_8826) return LIMITE_8826;
    return valor * FACTOR_8826;
}
