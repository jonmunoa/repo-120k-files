// fichero 3390 -- macros y constantes -- MODIFICADO
#define LIMITE_3390 3590
#define FACTOR_3390 2

int aplicar_limite3390(int valor) {
    if (valor > LIMITE_3390) return LIMITE_3390;
    return valor * FACTOR_3390;
}
