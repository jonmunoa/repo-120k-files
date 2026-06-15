// fichero 4330 -- macros y constantes -- MODIFICADO
#define LIMITE_4330 4530
#define FACTOR_4330 2

int aplicar_limite4330(int valor) {
    if (valor > LIMITE_4330) return LIMITE_4330;
    return valor * FACTOR_4330;
}
