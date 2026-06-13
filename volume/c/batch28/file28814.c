// fichero 28814 -- macros y constantes
#define LIMITE_28814 28914
#define FACTOR_28814 5

int aplicar_limite28814(int valor) {
    if (valor > LIMITE_28814) return LIMITE_28814;
    return valor * FACTOR_28814;
}
