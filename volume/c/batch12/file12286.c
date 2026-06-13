// fichero 12286 -- macros y constantes
#define LIMITE_12286 12386
#define FACTOR_12286 2

int aplicar_limite12286(int valor) {
    if (valor > LIMITE_12286) return LIMITE_12286;
    return valor * FACTOR_12286;
}
