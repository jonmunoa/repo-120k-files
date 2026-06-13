// fichero 41510 -- macros y constantes
#define LIMITE_41510 41610
#define FACTOR_41510 1

int aplicar_limite41510(int valor) {
    if (valor > LIMITE_41510) return LIMITE_41510;
    return valor * FACTOR_41510;
}
