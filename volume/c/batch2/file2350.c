// fichero 2350 -- macros y constantes -- MODIFICADO
#define LIMITE_2350 2550
#define FACTOR_2350 2

int aplicar_limite2350(int valor) {
    if (valor > LIMITE_2350) return LIMITE_2350;
    return valor * FACTOR_2350;
}
