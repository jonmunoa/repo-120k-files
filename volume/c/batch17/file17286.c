// fichero 17286 -- macros y constantes -- MODIFICADO
#define LIMITE_17286 17486
#define FACTOR_17286 3

int aplicar_limite17286(int valor) {
    if (valor > LIMITE_17286) return LIMITE_17286;
    return valor * FACTOR_17286;
}
