// fichero 13154 -- macros y constantes
#define LIMITE_13154 13254
#define FACTOR_13154 5

int aplicar_limite13154(int valor) {
    if (valor > LIMITE_13154) return LIMITE_13154;
    return valor * FACTOR_13154;
}
