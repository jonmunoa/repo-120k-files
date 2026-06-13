// fichero 8738 -- macros y constantes
#define LIMITE_8738 8838
#define FACTOR_8738 4

int aplicar_limite8738(int valor) {
    if (valor > LIMITE_8738) return LIMITE_8738;
    return valor * FACTOR_8738;
}
