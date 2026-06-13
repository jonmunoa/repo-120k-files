// fichero 29738 -- macros y constantes
#define LIMITE_29738 29838
#define FACTOR_29738 4

int aplicar_limite29738(int valor) {
    if (valor > LIMITE_29738) return LIMITE_29738;
    return valor * FACTOR_29738;
}
