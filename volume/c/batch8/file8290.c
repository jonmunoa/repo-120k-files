// fichero 8290 -- macros y constantes
#define LIMITE_8290 8390
#define FACTOR_8290 1

int aplicar_limite8290(int valor) {
    if (valor > LIMITE_8290) return LIMITE_8290;
    return valor * FACTOR_8290;
}
