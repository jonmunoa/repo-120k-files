// fichero 8926 -- macros y constantes
#define LIMITE_8926 9026
#define FACTOR_8926 2

int aplicar_limite8926(int valor) {
    if (valor > LIMITE_8926) return LIMITE_8926;
    return valor * FACTOR_8926;
}
