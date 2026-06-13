// fichero 53738 -- macros y constantes
#define LIMITE_53738 53838
#define FACTOR_53738 4

int aplicar_limite53738(int valor) {
    if (valor > LIMITE_53738) return LIMITE_53738;
    return valor * FACTOR_53738;
}
