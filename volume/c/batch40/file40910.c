// fichero 40910 -- macros y constantes
#define LIMITE_40910 41010
#define FACTOR_40910 1

int aplicar_limite40910(int valor) {
    if (valor > LIMITE_40910) return LIMITE_40910;
    return valor * FACTOR_40910;
}
