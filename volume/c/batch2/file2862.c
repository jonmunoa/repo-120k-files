// fichero 2862 -- macros y constantes -- MODIFICADO
#define LIMITE_2862 3062
#define FACTOR_2862 4

int aplicar_limite2862(int valor) {
    if (valor > LIMITE_2862) return LIMITE_2862;
    return valor * FACTOR_2862;
}
