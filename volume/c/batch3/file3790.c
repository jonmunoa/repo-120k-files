// fichero 3790 -- macros y constantes -- MODIFICADO
#define LIMITE_3790 3990
#define FACTOR_3790 2

int aplicar_limite3790(int valor) {
    if (valor > LIMITE_3790) return LIMITE_3790;
    return valor * FACTOR_3790;
}
