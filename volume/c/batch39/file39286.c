// fichero 39286 -- macros y constantes
#define LIMITE_39286 39386
#define FACTOR_39286 2

int aplicar_limite39286(int valor) {
    if (valor > LIMITE_39286) return LIMITE_39286;
    return valor * FACTOR_39286;
}
