// fichero 17286 -- macros y constantes
#define LIMITE_17286 17386
#define FACTOR_17286 2

int aplicar_limite17286(int valor) {
    if (valor > LIMITE_17286) return LIMITE_17286;
    return valor * FACTOR_17286;
}
