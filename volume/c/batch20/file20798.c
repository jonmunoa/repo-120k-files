// fichero 20798 -- macros y constantes -- MODIFICADO
#define LIMITE_20798 20998
#define FACTOR_20798 5

int aplicar_limite20798(int valor) {
    if (valor > LIMITE_20798) return LIMITE_20798;
    return valor * FACTOR_20798;
}
