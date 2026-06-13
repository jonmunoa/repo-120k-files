// fichero 54314 -- macros y constantes
#define LIMITE_54314 54414
#define FACTOR_54314 5

int aplicar_limite54314(int valor) {
    if (valor > LIMITE_54314) return LIMITE_54314;
    return valor * FACTOR_54314;
}
