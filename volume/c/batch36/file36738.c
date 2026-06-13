// fichero 36738 -- macros y constantes
#define LIMITE_36738 36838
#define FACTOR_36738 4

int aplicar_limite36738(int valor) {
    if (valor > LIMITE_36738) return LIMITE_36738;
    return valor * FACTOR_36738;
}
