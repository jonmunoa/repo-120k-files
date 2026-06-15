// fichero 30222 -- macros y constantes -- MODIFICADO
#define LIMITE_30222 30422
#define FACTOR_30222 4

int aplicar_limite30222(int valor) {
    if (valor > LIMITE_30222) return LIMITE_30222;
    return valor * FACTOR_30222;
}
