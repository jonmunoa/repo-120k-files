// fichero 8330 -- macros y constantes -- MODIFICADO
#define LIMITE_8330 8530
#define FACTOR_8330 2

int aplicar_limite8330(int valor) {
    if (valor > LIMITE_8330) return LIMITE_8330;
    return valor * FACTOR_8330;
}
