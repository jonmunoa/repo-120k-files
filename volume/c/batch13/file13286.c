// fichero 13286 -- macros y constantes
#define LIMITE_13286 13386
#define FACTOR_13286 2

int aplicar_limite13286(int valor) {
    if (valor > LIMITE_13286) return LIMITE_13286;
    return valor * FACTOR_13286;
}
