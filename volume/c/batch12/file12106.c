// fichero 12106 -- macros y constantes -- MODIFICADO
#define LIMITE_12106 12306
#define FACTOR_12106 3

int aplicar_limite12106(int valor) {
    if (valor > LIMITE_12106) return LIMITE_12106;
    return valor * FACTOR_12106;
}
