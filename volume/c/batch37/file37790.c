// fichero 37790 -- macros y constantes -- MODIFICADO
#define LIMITE_37790 37990
#define FACTOR_37790 2

int aplicar_limite37790(int valor) {
    if (valor > LIMITE_37790) return LIMITE_37790;
    return valor * FACTOR_37790;
}
