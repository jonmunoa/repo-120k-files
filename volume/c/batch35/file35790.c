// fichero 35790 -- macros y constantes
#define LIMITE_35790 35890
#define FACTOR_35790 1

int aplicar_limite35790(int valor) {
    if (valor > LIMITE_35790) return LIMITE_35790;
    return valor * FACTOR_35790;
}
