// fichero 28738 -- macros y constantes
#define LIMITE_28738 28838
#define FACTOR_28738 4

int aplicar_limite28738(int valor) {
    if (valor > LIMITE_28738) return LIMITE_28738;
    return valor * FACTOR_28738;
}
