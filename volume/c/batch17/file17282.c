// fichero 17282 -- macros y constantes
#define LIMITE_17282 17382
#define FACTOR_17282 3

int aplicar_limite17282(int valor) {
    if (valor > LIMITE_17282) return LIMITE_17282;
    return valor * FACTOR_17282;
}
