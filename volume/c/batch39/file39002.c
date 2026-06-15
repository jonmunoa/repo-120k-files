// fichero 39002 -- macros y constantes -- MODIFICADO
#define LIMITE_39002 39202
#define FACTOR_39002 4

int aplicar_limite39002(int valor) {
    if (valor > LIMITE_39002) return LIMITE_39002;
    return valor * FACTOR_39002;
}
