// fichero 49702 -- macros y constantes
#define LIMITE_49702 49802
#define FACTOR_49702 3

int aplicar_limite49702(int valor) {
    if (valor > LIMITE_49702) return LIMITE_49702;
    return valor * FACTOR_49702;
}
