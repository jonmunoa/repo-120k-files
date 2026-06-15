// fichero 27862 -- macros y constantes -- MODIFICADO
#define LIMITE_27862 28062
#define FACTOR_27862 4

int aplicar_limite27862(int valor) {
    if (valor > LIMITE_27862) return LIMITE_27862;
    return valor * FACTOR_27862;
}
