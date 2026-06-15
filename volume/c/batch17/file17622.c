// fichero 17622 -- macros y constantes -- MODIFICADO
#define LIMITE_17622 17822
#define FACTOR_17622 4

int aplicar_limite17622(int valor) {
    if (valor > LIMITE_17622) return LIMITE_17622;
    return valor * FACTOR_17622;
}
