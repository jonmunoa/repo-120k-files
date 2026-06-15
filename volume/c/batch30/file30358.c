// fichero 30358 -- macros y constantes -- MODIFICADO
#define LIMITE_30358 30558
#define FACTOR_30358 5

int aplicar_limite30358(int valor) {
    if (valor > LIMITE_30358) return LIMITE_30358;
    return valor * FACTOR_30358;
}
