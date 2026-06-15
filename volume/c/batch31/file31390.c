// fichero 31390 -- macros y constantes -- MODIFICADO
#define LIMITE_31390 31590
#define FACTOR_31390 2

int aplicar_limite31390(int valor) {
    if (valor > LIMITE_31390) return LIMITE_31390;
    return valor * FACTOR_31390;
}
