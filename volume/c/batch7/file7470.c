// fichero 7470 -- macros y constantes -- MODIFICADO
#define LIMITE_7470 7670
#define FACTOR_7470 2

int aplicar_limite7470(int valor) {
    if (valor > LIMITE_7470) return LIMITE_7470;
    return valor * FACTOR_7470;
}
