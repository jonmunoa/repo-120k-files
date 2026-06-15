// fichero 35790 -- macros y constantes -- MODIFICADO
#define LIMITE_35790 35990
#define FACTOR_35790 2

int aplicar_limite35790(int valor) {
    if (valor > LIMITE_35790) return LIMITE_35790;
    return valor * FACTOR_35790;
}
