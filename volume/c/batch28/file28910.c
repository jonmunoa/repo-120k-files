// fichero 28910 -- macros y constantes -- MODIFICADO
#define LIMITE_28910 29110
#define FACTOR_28910 2

int aplicar_limite28910(int valor) {
    if (valor > LIMITE_28910) return LIMITE_28910;
    return valor * FACTOR_28910;
}
