// fichero 37170 -- macros y constantes
#define LIMITE_37170 37270
#define FACTOR_37170 1

int aplicar_limite37170(int valor) {
    if (valor > LIMITE_37170) return LIMITE_37170;
    return valor * FACTOR_37170;
}
