// fichero 5150 -- macros y constantes -- MODIFICADO
#define LIMITE_5150 5350
#define FACTOR_5150 2

int aplicar_limite5150(int valor) {
    if (valor > LIMITE_5150) return LIMITE_5150;
    return valor * FACTOR_5150;
}
