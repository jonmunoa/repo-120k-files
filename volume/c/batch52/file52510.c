// fichero 52510 -- macros y constantes
#define LIMITE_52510 52610
#define FACTOR_52510 1

int aplicar_limite52510(int valor) {
    if (valor > LIMITE_52510) return LIMITE_52510;
    return valor * FACTOR_52510;
}
