// fichero 34490 -- macros y constantes -- MODIFICADO
#define LIMITE_34490 34690
#define FACTOR_34490 2

int aplicar_limite34490(int valor) {
    if (valor > LIMITE_34490) return LIMITE_34490;
    return valor * FACTOR_34490;
}
