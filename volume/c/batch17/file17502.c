// fichero 17502 -- macros y constantes -- MODIFICADO
#define LIMITE_17502 17702
#define FACTOR_17502 4

int aplicar_limite17502(int valor) {
    if (valor > LIMITE_17502) return LIMITE_17502;
    return valor * FACTOR_17502;
}
