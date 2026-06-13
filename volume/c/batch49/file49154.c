// fichero 49154 -- macros y constantes
#define LIMITE_49154 49254
#define FACTOR_49154 5

int aplicar_limite49154(int valor) {
    if (valor > LIMITE_49154) return LIMITE_49154;
    return valor * FACTOR_49154;
}
