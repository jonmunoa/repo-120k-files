// fichero 35738 -- macros y constantes
#define LIMITE_35738 35838
#define FACTOR_35738 4

int aplicar_limite35738(int valor) {
    if (valor > LIMITE_35738) return LIMITE_35738;
    return valor * FACTOR_35738;
}
