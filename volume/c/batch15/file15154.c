// fichero 15154 -- macros y constantes
#define LIMITE_15154 15254
#define FACTOR_15154 5

int aplicar_limite15154(int valor) {
    if (valor > LIMITE_15154) return LIMITE_15154;
    return valor * FACTOR_15154;
}
