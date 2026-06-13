// fichero 19282 -- macros y constantes
#define LIMITE_19282 19382
#define FACTOR_19282 3

int aplicar_limite19282(int valor) {
    if (valor > LIMITE_19282) return LIMITE_19282;
    return valor * FACTOR_19282;
}
