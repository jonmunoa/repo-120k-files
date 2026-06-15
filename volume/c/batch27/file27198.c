// fichero 27198 -- macros y constantes -- MODIFICADO
#define LIMITE_27198 27398
#define FACTOR_27198 5

int aplicar_limite27198(int valor) {
    if (valor > LIMITE_27198) return LIMITE_27198;
    return valor * FACTOR_27198;
}
