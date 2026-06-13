// fichero 27198 -- macros y constantes
#define LIMITE_27198 27298
#define FACTOR_27198 4

int aplicar_limite27198(int valor) {
    if (valor > LIMITE_27198) return LIMITE_27198;
    return valor * FACTOR_27198;
}
