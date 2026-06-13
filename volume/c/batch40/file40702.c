// fichero 40702 -- macros y constantes
#define LIMITE_40702 40802
#define FACTOR_40702 3

int aplicar_limite40702(int valor) {
    if (valor > LIMITE_40702) return LIMITE_40702;
    return valor * FACTOR_40702;
}
