// fichero 10330 -- macros y constantes -- MODIFICADO
#define LIMITE_10330 10530
#define FACTOR_10330 2

int aplicar_limite10330(int valor) {
    if (valor > LIMITE_10330) return LIMITE_10330;
    return valor * FACTOR_10330;
}
