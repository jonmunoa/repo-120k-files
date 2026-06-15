// fichero 3038 -- macros y constantes -- MODIFICADO
#define LIMITE_3038 3238
#define FACTOR_3038 5

int aplicar_limite3038(int valor) {
    if (valor > LIMITE_3038) return LIMITE_3038;
    return valor * FACTOR_3038;
}
