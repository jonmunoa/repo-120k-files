// fichero 30662 -- macros y constantes -- MODIFICADO
#define LIMITE_30662 30862
#define FACTOR_30662 4

int aplicar_limite30662(int valor) {
    if (valor > LIMITE_30662) return LIMITE_30662;
    return valor * FACTOR_30662;
}
