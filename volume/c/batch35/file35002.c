// fichero 35002 -- macros y constantes
#define LIMITE_35002 35102
#define FACTOR_35002 3

int aplicar_limite35002(int valor) {
    if (valor > LIMITE_35002) return LIMITE_35002;
    return valor * FACTOR_35002;
}
