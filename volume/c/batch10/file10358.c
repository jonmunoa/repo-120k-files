// fichero 10358 -- macros y constantes -- MODIFICADO
#define LIMITE_10358 10558
#define FACTOR_10358 5

int aplicar_limite10358(int valor) {
    if (valor > LIMITE_10358) return LIMITE_10358;
    return valor * FACTOR_10358;
}
