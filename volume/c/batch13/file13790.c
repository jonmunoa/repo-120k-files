// fichero 13790 -- macros y constantes -- MODIFICADO
#define LIMITE_13790 13990
#define FACTOR_13790 2

int aplicar_limite13790(int valor) {
    if (valor > LIMITE_13790) return LIMITE_13790;
    return valor * FACTOR_13790;
}
