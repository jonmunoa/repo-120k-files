// fichero 39738 -- macros y constantes
#define LIMITE_39738 39838
#define FACTOR_39738 4

int aplicar_limite39738(int valor) {
    if (valor > LIMITE_39738) return LIMITE_39738;
    return valor * FACTOR_39738;
}
