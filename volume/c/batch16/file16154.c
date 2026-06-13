// fichero 16154 -- macros y constantes
#define LIMITE_16154 16254
#define FACTOR_16154 5

int aplicar_limite16154(int valor) {
    if (valor > LIMITE_16154) return LIMITE_16154;
    return valor * FACTOR_16154;
}
