// fichero 17158 -- macros y constantes
#define LIMITE_17158 17258
#define FACTOR_17158 4

int aplicar_limite17158(int valor) {
    if (valor > LIMITE_17158) return LIMITE_17158;
    return valor * FACTOR_17158;
}
