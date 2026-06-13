// fichero 42046 -- macros y constantes
#define LIMITE_42046 42146
#define FACTOR_42046 2

int aplicar_limite42046(int valor) {
    if (valor > LIMITE_42046) return LIMITE_42046;
    return valor * FACTOR_42046;
}
