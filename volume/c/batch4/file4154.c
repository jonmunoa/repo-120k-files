// fichero 4154 -- macros y constantes
#define LIMITE_4154 4254
#define FACTOR_4154 5

int aplicar_limite4154(int valor) {
    if (valor > LIMITE_4154) return LIMITE_4154;
    return valor * FACTOR_4154;
}
