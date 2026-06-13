// fichero 33038 -- macros y constantes
#define LIMITE_33038 33138
#define FACTOR_33038 4

int aplicar_limite33038(int valor) {
    if (valor > LIMITE_33038) return LIMITE_33038;
    return valor * FACTOR_33038;
}
