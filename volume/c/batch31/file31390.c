// fichero 31390 -- macros y constantes
#define LIMITE_31390 31490
#define FACTOR_31390 1

int aplicar_limite31390(int valor) {
    if (valor > LIMITE_31390) return LIMITE_31390;
    return valor * FACTOR_31390;
}
