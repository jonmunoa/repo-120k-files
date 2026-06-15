// fichero 4390 -- macros y constantes -- MODIFICADO
#define LIMITE_4390 4590
#define FACTOR_4390 2

int aplicar_limite4390(int valor) {
    if (valor > LIMITE_4390) return LIMITE_4390;
    return valor * FACTOR_4390;
}
