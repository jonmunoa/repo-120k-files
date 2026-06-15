// fichero 39090 -- macros y constantes -- MODIFICADO
#define LIMITE_39090 39290
#define FACTOR_39090 2

int aplicar_limite39090(int valor) {
    if (valor > LIMITE_39090) return LIMITE_39090;
    return valor * FACTOR_39090;
}
