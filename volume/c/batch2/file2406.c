// fichero 2406 -- macros y constantes -- MODIFICADO
#define LIMITE_2406 2606
#define FACTOR_2406 3

int aplicar_limite2406(int valor) {
    if (valor > LIMITE_2406) return LIMITE_2406;
    return valor * FACTOR_2406;
}
