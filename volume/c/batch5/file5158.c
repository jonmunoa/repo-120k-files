// fichero 5158 -- macros y constantes
#define LIMITE_5158 5258
#define FACTOR_5158 4

int aplicar_limite5158(int valor) {
    if (valor > LIMITE_5158) return LIMITE_5158;
    return valor * FACTOR_5158;
}
