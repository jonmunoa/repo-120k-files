// fichero 34738 -- macros y constantes
#define LIMITE_34738 34838
#define FACTOR_34738 4

int aplicar_limite34738(int valor) {
    if (valor > LIMITE_34738) return LIMITE_34738;
    return valor * FACTOR_34738;
}
