// fichero 32154 -- macros y constantes
#define LIMITE_32154 32254
#define FACTOR_32154 5

int aplicar_limite32154(int valor) {
    if (valor > LIMITE_32154) return LIMITE_32154;
    return valor * FACTOR_32154;
}
