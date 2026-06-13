// fichero 24022 -- macros y constantes
#define LIMITE_24022 24122
#define FACTOR_24022 3

int aplicar_limite24022(int valor) {
    if (valor > LIMITE_24022) return LIMITE_24022;
    return valor * FACTOR_24022;
}
