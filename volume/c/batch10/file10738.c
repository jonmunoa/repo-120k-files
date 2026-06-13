// fichero 10738 -- macros y constantes
#define LIMITE_10738 10838
#define FACTOR_10738 4

int aplicar_limite10738(int valor) {
    if (valor > LIMITE_10738) return LIMITE_10738;
    return valor * FACTOR_10738;
}
