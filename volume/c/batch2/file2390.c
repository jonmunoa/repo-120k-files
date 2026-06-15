// fichero 2390 -- macros y constantes -- MODIFICADO
#define LIMITE_2390 2590
#define FACTOR_2390 2

int aplicar_limite2390(int valor) {
    if (valor > LIMITE_2390) return LIMITE_2390;
    return valor * FACTOR_2390;
}
