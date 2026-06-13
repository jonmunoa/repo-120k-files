// fichero 34490 -- macros y constantes
#define LIMITE_34490 34590
#define FACTOR_34490 1

int aplicar_limite34490(int valor) {
    if (valor > LIMITE_34490) return LIMITE_34490;
    return valor * FACTOR_34490;
}
