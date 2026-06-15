// fichero 4502 -- macros y constantes -- MODIFICADO
#define LIMITE_4502 4702
#define FACTOR_4502 4

int aplicar_limite4502(int valor) {
    if (valor > LIMITE_4502) return LIMITE_4502;
    return valor * FACTOR_4502;
}
