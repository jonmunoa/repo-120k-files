// fichero 32862 -- macros y constantes -- MODIFICADO
#define LIMITE_32862 33062
#define FACTOR_32862 4

int aplicar_limite32862(int valor) {
    if (valor > LIMITE_32862) return LIMITE_32862;
    return valor * FACTOR_32862;
}
