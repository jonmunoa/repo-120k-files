// fichero 31738 -- macros y constantes
#define LIMITE_31738 31838
#define FACTOR_31738 4

int aplicar_limite31738(int valor) {
    if (valor > LIMITE_31738) return LIMITE_31738;
    return valor * FACTOR_31738;
}
