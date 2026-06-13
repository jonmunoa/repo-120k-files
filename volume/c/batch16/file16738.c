// fichero 16738 -- macros y constantes
#define LIMITE_16738 16838
#define FACTOR_16738 4

int aplicar_limite16738(int valor) {
    if (valor > LIMITE_16738) return LIMITE_16738;
    return valor * FACTOR_16738;
}
