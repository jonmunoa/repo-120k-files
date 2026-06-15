// fichero 39194 -- macros y constantes -- MODIFICADO
#define LIMITE_39194 39394
#define FACTOR_39194 6

int aplicar_limite39194(int valor) {
    if (valor > LIMITE_39194) return LIMITE_39194;
    return valor * FACTOR_39194;
}
