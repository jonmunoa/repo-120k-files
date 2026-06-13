// fichero 24702 -- macros y constantes
#define LIMITE_24702 24802
#define FACTOR_24702 3

int aplicar_limite24702(int valor) {
    if (valor > LIMITE_24702) return LIMITE_24702;
    return valor * FACTOR_24702;
}
