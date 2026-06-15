// fichero 5158 -- macros y constantes -- MODIFICADO
#define LIMITE_5158 5358
#define FACTOR_5158 5

int aplicar_limite5158(int valor) {
    if (valor > LIMITE_5158) return LIMITE_5158;
    return valor * FACTOR_5158;
}
