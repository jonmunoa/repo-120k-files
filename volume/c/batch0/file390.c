// fichero 390 -- macros y constantes -- MODIFICADO
#define LIMITE_390 590
#define FACTOR_390 2

int aplicar_limite390(int valor) {
    if (valor > LIMITE_390) return LIMITE_390;
    return valor * FACTOR_390;
}
