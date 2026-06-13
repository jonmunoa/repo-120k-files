// fichero 450 -- macros y constantes
#define LIMITE_450 550
#define FACTOR_450 1

int aplicar_limite450(int valor) {
    if (valor > LIMITE_450) return LIMITE_450;
    return valor * FACTOR_450;
}
